#ifndef CUBBYRENDER_RENDER_SYSTEM_H
#define CUBBYRENDER_RENDER_SYSTEM_H

#include <Core/Utils/Macros.hpp>

#include <string>
#include <vector>

namespace CubbyRender
{
class CUBBYRENDER_EXPORT RenderSystem
{
 public:
    RenderSystem(const RenderSystem&) = delete;
    RenderSystem(RenderSystem&&) = delete;

    RenderSystem& operator=(const RenderSystem&) = delete;
    RenderSystem& operator=(RenderSystem&&) = delete;

    static std::vector<std::string> FindModules();

 private:
    RenderSystem() = default;
};
}  // namespace CubbyRender

#endif