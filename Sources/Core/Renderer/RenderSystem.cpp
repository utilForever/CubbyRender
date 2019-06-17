#include <Core/Commons/BuildID.hpp>
#include <Core/Platform/Module.hpp>
#include <Core/Renderer/RenderSystem.hpp>

#include <stdexcept>

namespace CubbyRender
{
std::vector<std::string> RenderSystem::FindModules()
{
    static const char* moduleList[] = {"OpenGL",

#ifdef CUBBYRENDER_MACOSX
                                       "Metal",
#endif
                                       "Vulkan",

#ifdef CUBBYRENDER_WINDOWS
                                       "Direct3D11", "Direct3D12"
#endif
    };

    std::vector<std::string> modules;

    for (auto module : moduleList)
    {
        auto moduleName = Module::GetModuleFilename(module);
        if (Module::IsAvailable(moduleName.c_str()))
        {
            modules.emplace_back(module);
        }
    }

    return modules;
}

static bool LoadRenderSystemBuildID(Module& module,
                                    const std::string& moduleFilename)
{
    CUBBYRENDER_PROC_INTERFACE(int, PFN_RENDERSYSTEM_BUILD_ID, (void));

    const auto RenderSystemBuildID =
        reinterpret_cast<PFN_RENDERSYSTEM_BUILD_ID>(
            module.LoadProcedure("CubbyRender_RenderSystem_BuildID"));
    if (!RenderSystemBuildID)
        throw std::runtime_error(
            "failed to load <LLGL_RenderSystem_BuildID> procedure from module: "
            "\"" +
            moduleFilename + "\"");

    return (RenderSystemBuildID() == GetBuildID());
}

std::unique_ptr<RenderSystem> RenderSystem::Load(
    const RenderSystemDescriptor& renderSystemDesc)
{
    // Load render system module
    auto moduleFilename =
        Module::GetModuleFilename(renderSystemDesc.moduleName.c_str());
    auto module = Module::Load(moduleFilename.c_str());

    // Verify build ID from render system module to detect a module, that has
    // compiled with a different compiler(type, version, debug / release mode
    // and so on)
    if (!LoadRenderSystemBuildID(*module, moduleFilename))
    {
        throw std::runtime_error("build ID mismatch in render system module");
    }

    return nullptr;
}

}  // namespace CubbyRender