#ifndef CUBBYRENDER_BUILD_ID_H
#define CUBBYRENDER_BUILD_ID_H

namespace CubbyRender
{
//! Increment this number when the interface of CubbyRender changes in any way
constexpr int CUBBYRENDER_BUILD_VERSION = 1;

constexpr int GetBuildID()
{
#ifdef CUBBYRENDER_DEBUG
#if defined(_MSC_VER)
    return 100000 + CUBBYRENDER_BUILD_VERSION + _MSC_VER;
#elif defined(__GNUC__)
    return 200000 + CUBBYRENDER_BUILD_VERSION + __GNUC__;
#elif defined(__clang__)
    return 300000 + CUBBYRENDER_BUILD_VERSION + __clang__;
#endif
#else
#if defined(_MSC_VER)
    return 110000 + CUBBYRENDER_BUILD_VERSION + _MSC_VER;
#elif defined(__GNUC__)
    return 210000 + CUBBYRENDER_BUILD_VERSION + __GNUC__;
#elif defined(__clang__)
    return 310000 + CUBBYRENDER_BUILD_VERSION + __clang__;
#endif
    return -1;
#endif
}
}  // namespace CubbyRender

#endif