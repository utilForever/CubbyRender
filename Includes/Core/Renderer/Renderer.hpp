#ifndef CUBBYRENDER_RENDERER_H
#define CUBBYRENDER_RENDERER_H

#include <Core/Utils/Macros.hpp>

#include <string>
#include <vector>

namespace CubbyRender
{
class CUBBYRENDER_EXPORT Renderer
{
 public:
    Renderer(const Renderer&) = delete;
    Renderer(Renderer&&) = delete;

    Renderer& operator=(const Renderer&) = delete;
    Renderer& operator=(Renderer&&) = delete;

    static std::vector<std::string> FindAvailableGraphicsAPIs();

 private:
    Renderer() = default;
};
}

#endif