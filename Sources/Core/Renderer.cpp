#include <Core/Renderer.h>

namespace CubbyRender
{
    std::vector<std::string> Renderer::FindAvailableGraphicsAPIs()
    {
        static const char* apiList[] =
        {
            "OpenGL",

#ifdef CUBBYRENDER_MACOSX
            "Metal",
#endif
            "Vulkan",

#ifdef CUBBYRENDER_WINDOWS
            "Direct3D11",
            "Direct3D12"
#endif
        };

        std::vector<std::string> result;

        for (auto api : apiList)
        {
            //auto moduleName = GraphicsAPI::GetAPIFilename(m);
            //if (Module::IsAvailable(moduleName.c_str()))
            //{
            //    result.emplace_back(api);
            //}
        }

        return result;
    }

}