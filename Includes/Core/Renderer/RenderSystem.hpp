#ifndef CUBBYRENDER_RENDER_SYSTEM_H
#define CUBBYRENDER_RENDER_SYSTEM_H

#include <Core/Platform/Module.hpp>
#include <Core/Renderer/RenderSystemFlags.hpp>
#include <Core/Utils/Macros.hpp>

#include <memory>
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

    //! Returns the list of all available render system modules for the current
    //! platform.
    static std::vector<std::string> FindModules();

    //! Loads a new render system from the specified module.
    static std::unique_ptr<RenderSystem> Load(
        const RenderSystemDescriptor& renderSystemDesc);

 private:
    RenderSystem() = default;
};
}  // namespace CubbyRender

#endif