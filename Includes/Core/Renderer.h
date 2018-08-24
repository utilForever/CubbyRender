#ifndef CUBBYRENDER_RENDERER_H
#define CUBBYRENDER_RENDERER_H

#include <Core/Macros.h>

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

    std::vector<std::string> FindAvailableGraphicsAPIs();

 private:
    Renderer() = default;
};
}

#endif