#include <Core/Platform/GraphicsAPI.hpp>
#include <Core/Renderer/Renderer.hpp>

namespace CubbyRender
{
    std::vector<std::string> Renderer::FindGraphicsAPIs()
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
            auto apiName = GraphicsAPI::GetAPIFilename(api);
            if (GraphicsAPI::IsAvailable(apiName.c_str()))
            {
                result.emplace_back(api);
            }
        }

        return result;
    }

}