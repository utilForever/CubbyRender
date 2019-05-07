#include <Core/Platform/Windows/WindowsModule.hpp>

#include <stdexcept>

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

std::string Module::GetModuleFilename(const char* moduleName)
{
    std::string s = "CubbyRender_";
    s += moduleName;
#ifdef CUBBYRENDER_DEBUG
    s += "D";
#endif
    s += ".dll";
    return s;
}

bool Module::IsAvailable(const char* moduleFilename)
{
    // Check if Windows DLL can be loaded properly
    if (const auto handle = LoadLibrarySafe(moduleFilename))
    {
        FreeLibrary(handle);
        return true;
    }

    return false;
}

WindowsModule::WindowsModule(const char* apiName)
{
    // Open Windows DLL file
    m_handle = LoadLibrarySafe(apiName);

    // Check if handle load is failed
    if (!m_handle)
    {
        throw std::runtime_error("failed to load DLL: \"" +
                                 std::string(apiName) + "\"");
    }
}

WindowsModule::~WindowsModule()
{
    FreeLibrary(m_handle);
}
}  // namespace CubbyRender