#include <Core/Renderer/RenderSystem.hpp>
#include <Core/Utils/ExampleUtils.hpp>

#include <iostream>

std::string GetSelectedRendererModule(int argc, char* argv[])
{
    std::string rendererModule;

    if (argc > 1)
    {
        rendererModule = argv[1];
    }
    else
    {
        // Find available modules
        auto modules = CubbyRender::RenderSystem::FindModules();

        if (modules.empty())
        {
            throw std::runtime_error(
                "No renderer modules available on target platform");
        }

        if (modules.size() == 1)
        {
            rendererModule = modules.front();
        }
        else
        {
            while (rendererModule.empty())
            {
                std::cout << "Select renderer: \n";

                std::size_t i = 0;
                for (const auto& api : modules)
                {
                    std::cout << " " << (++i) << ".) " << api << '\n';
                }

                std::size_t select = 0;
                std::cin >> select;
                --select;

                if (select < modules.size())
                {
                    rendererModule = modules[select];
                }
                else
                {
                    std::cerr << "Invalid input\n";
                }
            }
        }
    }

    std::cout << "Selected renderer: " << rendererModule << '\n';

    return rendererModule;
}
