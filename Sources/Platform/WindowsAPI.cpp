#include <Core/Platform/WindowsAPI.h>

namespace CubbyRender
{
std::string GraphicsAPI::GetAPIFilename(const char* apiName)
{
    std::string s = "CubbyRender_";
    s += apiName;
#ifdef CUBBYRENDER_DEBUG
    s += "D";
#endif
    s += ".dll";
    return s;
}

WindowsAPI::WindowsAPI(const char* apiName)
{
    // Disable dialog error message
    const UINT prevMode = SetErrorMode(0);
    SetErrorMode(prevMode | SEM_FAILCRITICALERRORS | SEM_NOOPENFILEERRORBOX);

    // Open Win32 DLL
    m_module = LoadLibraryA(apiName);

    // Reset previous error mode
    SetErrorMode(prevMode);

    // Check if handle load is failed
    if (!m_module)
    {
        throw std::runtime_error("failed to load DLL: \"" +
                                 std::string(apiName) + "\"");
    }
}

WindowsAPI::~WindowsAPI()
{
    FreeLibrary(m_module);
}
}