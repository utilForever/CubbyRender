#ifndef CUBBYRENDER_EXPORT_H
#define CUBBYRENDER_EXPORT_H

#if defined _MSC_VER && !defined CUBBYRENDER_BUILD_STATIC_LIB
#define CUBBYRENDER_EXPORT __declspec(dllexport)
#else
#define CUBBYRENDER_EXPORT
#endif

#endif