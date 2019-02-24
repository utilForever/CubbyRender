#include <Core/Renderer/Renderer.h>

int main()
{
    auto rendererAPI = CubbyRender::Renderer::FindAvailableGraphicsAPIs();

    return EXIT_SUCCESS;
}