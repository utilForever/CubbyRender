#ifndef CUBBYRENDER_MACROS_H
#define CUBBYRENDER_MACROS_H

#if defined _MSC_VER && !defined CUBBYRENDER_BUILD_STATIC_LIB
#define CUBBYRENDER_EXPORT __declspec(dllexport)
#else
#define CUBBYRENDER_EXPORT
#endif

#endif