#ifndef CUBBYRENDER_MACROS_H
#define CUBBYRENDER_MACROS_H

// Macro for library export
#if defined _MSC_VER && !defined CUBBYRENDER_BUILD_STATIC_LIB
#define CUBBYRENDER_EXPORT __declspec(dllexport)
#else
#define CUBBYRENDER_EXPORT
#endif

// Macro for platform
#if defined(_WIN32) || defined(_WIN64)
#define CUBBYRENDER_WINDOWS
#elif defined(__APPLE__)
#define CUBBYRENDER_APPLE
#ifndef CUBBYFLOW_IOS
#define CUBBYRENDER_MACOSX
#endif
#elif defined(linux) || defined(__linux__)
#define CUBBYRENDER_LINUX
#endif

#endif