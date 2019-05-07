#include <Core/Renderer/RenderSystem.hpp>
#include <Core/Utils/ExampleUtils.hpp>

#include <memory>
#include <string>

int main(int argc, char* argv[])
{
    std::string rendererAPI = GetSelectedRendererModule(argc, argv);

    return EXIT_SUCCESS;
}
