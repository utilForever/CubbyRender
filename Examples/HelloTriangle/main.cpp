#include <Core/Renderer/Renderer.hpp>

int main()
{
    auto rendererAPI = CubbyRender::Renderer::FindAvailableGraphicsAPIs();

    return EXIT_SUCCESS;
}