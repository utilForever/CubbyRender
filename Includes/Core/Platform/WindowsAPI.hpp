#ifndef CUBBYRENDER_WINDOWS_API_H
#define CUBBYRENDER_WINDOWS_API_H

#include <Core/Platform/GraphicsAPI.hpp>

#include <Windows.h>

namespace CubbyRender
{
class WindowsAPI : public GraphicsAPI
{
 public:
    WindowsAPI(const char* apiFilename);
    ~WindowsAPI();

 private:
    HMODULE m_module = nullptr;
};
}  // namespace CubbyRender

#endif