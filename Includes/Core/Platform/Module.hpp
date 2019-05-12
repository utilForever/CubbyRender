#ifndef CUBBYRENDER_MODULE_H
#define CUBBYRENDER_MODULE_H

#include <memory>
#include <string>

namespace CubbyRender
{
class Module
{
 public:
    Module(const Module&) = delete;
    Module(Module&&) = delete;

    Module& operator=(const Module&) = delete;
    Module& operator=(Module&&) = delete;

    //! Converts the module name into a specific filename
    static std::string GetModuleFilename(const char* moduleName);

    //! Returns true if the specified module is available.
    static bool IsAvailable(const char* moduleFilename);

    //! Returns the specified module or null if it is not available.
    static std::unique_ptr<Module> Load(const char* moduleFilename);

 protected:
    Module() = default;
};
}  // namespace CubbyRender

#endif