#ifndef CUBBYRENDER_CORE_UTILS_H
#define CUBBYRENDER_CORE_UTILS_H

#include <memory>

namespace CubbyRender
{
//! Alternative to std::make_unique<T> for strict C++11 support.
template <typename T, typename... Args>
std::unique_ptr<T> MakeUnique(Args&&... args)
{
    return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}
}  // namespace CubbyRender

#endif