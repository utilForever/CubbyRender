#include <Core/Platform/WindowsAPI.h>

namespace CubbyRender
{
static HMODULE LoadLibrarySafe(const char* apiName)
{
    // Disable dialog error message
    const UINT prevMode = SetErrorMode(0);
    SetErrorMode(prevMode | SEM_FAILCRITICALERRORS | SEM_NOOPENFILEERRORBOX);

    // Open Win32 DLL
    const HMODULE module = LoadLibraryA(apiName);

    // Reset previous error mode
    SetErrorMode(prevMode);

    return module;
}

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

bool GraphicsAPI::IsAvailable(const char* apiFilename)
{
    // Check if Windows DLL can be loaded properly
    if (const auto handle = LoadLibrarySafe(apiFilename))
    {
        FreeLibrary(handle);
        return true;
    }

    return false;
}

WindowsAPI::WindowsAPI(const char* apiName)
{
    m_module = LoadLibrarySafe(apiName);

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