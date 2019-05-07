#include <Core/Renderer/RenderSystem.hpp>
#include <Core/Utils/ExampleUtils.hpp>

#include <memory>
#include <string>

int main()
{
    std::string rendererAPI = GetSelectedRendererModule();

    return EXIT_SUCCESS;
}
