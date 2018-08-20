#ifndef CUBBYRENDER_RENDERER_H
#define CUBBYRENDER_RENDERER_H

#include <Core/Export.h>

class CUBBYRENDER_EXPORT Renderer
{
 public:
    Renderer(const Renderer&) = delete;
    Renderer(Renderer&&) = delete;

    Renderer& operator=(const Renderer&) = delete;
    Renderer& operator=(Renderer&&) = delete;

 private:
    Renderer() = default;
};

#endif