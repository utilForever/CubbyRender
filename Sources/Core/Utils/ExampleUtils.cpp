#include <Core/Renderer/Renderer.hpp>
#include <Core/Utils/ExampleUtils.hpp>

#include <iostream>

std::string SelectRendererAPI()
{
    std::string rendererAPI;

    auto apis = CubbyRender::Renderer::FindGraphicsAPIs();

    if (apis.empty())
    {
        throw std::runtime_error(
            "No graphics APIs available on target platform");
    }

    if (apis.size() == 1)
    {
        rendererAPI = apis.front();
    }
    else
    {
        while (rendererAPI.empty())
        {
            std::cout << "Select renderer: \n";

            std::size_t i = 0;
            for (const auto& api : apis)
            {
                std::cout << " " << (++i) << ".) " << api << '\n';
            }

            std::size_t select = 0;
            std::cin >> select;
            --select;

            if (select < apis.size())
            {
                rendererAPI = apis[select];
            }
            else
            {
                std::cerr << "Invalid input\n";
            }
        }
    }

    std::cout << "Selected renderer: " << rendererAPI << '\n';

    return rendererAPI;
}
