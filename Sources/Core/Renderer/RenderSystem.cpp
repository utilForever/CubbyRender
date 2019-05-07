#include <Core/Platform/Module.hpp>
#include <Core/Renderer/RenderSystem.hpp>

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

std::unique_ptr<RenderSystem> RenderSystem::Load(std::string moduleName)
{
    auto moduleFilename = Module::GetModuleFilename(moduleName.c_str());

    return nullptr;
}

}  // namespace CubbyRender