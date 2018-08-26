#include <Core/Renderer/Renderer.h>

int main(int argc, char* argv[])
{
    auto rendererAPI = CubbyRender::Renderer::FindAvailableGraphicsAPIs();

    return EXIT_SUCCESS;
}