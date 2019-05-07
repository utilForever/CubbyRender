#ifndef CUBBYRENDER_WINDOWS_MODULE_H
#define CUBBYRENDER_WINDOWS_MODULE_H

#include <Core/Platform/Module.hpp>

#include <Windows.h>

namespace CubbyRender
{
class WindowsModule : public Module
{
 public:
    WindowsModule(const char* moduleFilename);
    ~WindowsModule();

 private:
    HMODULE m_handle = nullptr;
};
}  // namespace CubbyRender

#endif