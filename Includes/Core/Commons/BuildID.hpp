#ifndef CUBBYRENDER_BUILD_ID_H
#define CUBBYRENDER_BUILD_ID_H

//! Increment this number when the interface of CubbyRender changes in any way
#define CUBBYRENDER_BUILD_VERSION 1

#ifdef CUBBYRENDER_DEBUG
#if defined(_MSC_VER)
#define CUBBYRENDER_BUILD_ID (100000 + CUBBYRENDER_BUILD_VERSION + _MSC_VER)
#elif defined(__GNUC__)
#define CUBBYRENDER_BUILD_ID (200000 + CUBBYRENDER_BUILD_VERSION + __GNUC__)
#elif defined(__clang__)
#define CUBBYRENDER_BUILD_ID (300000 + CUBBYRENDER_BUILD_VERSION + __clang__)
#endif
#else
#if defined(_MSC_VER)
#define CUBBYRENDER_BUILD_ID (110000 + CUBBYRENDER_BUILD_VERSION + _MSC_VER)
#elif defined(__GNUC__)
#define CUBBYRENDER_BUILD_ID (210000 + CUBBYRENDER_BUILD_VERSION + __GNUC__)
#elif defined(__clang__)
#define CUBBYRENDER_BUILD_ID (310000 + CUBBYRENDER_BUILD_VERSION + __clang__)
#endif
#endif

#endif