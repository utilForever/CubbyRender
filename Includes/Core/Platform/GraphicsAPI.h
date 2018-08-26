#ifndef CUBBYRENDER_GRAPHICS_API_H
#define CUBBYRENDER_GRAPHICS_API_H

#include <string>

namespace CubbyRender
{
class GraphicsAPI
{
 public:
    GraphicsAPI(const GraphicsAPI&) = delete;
    GraphicsAPI(GraphicsAPI&&) = delete;

    GraphicsAPI& operator=(const GraphicsAPI&) = delete;
    GraphicsAPI& operator=(GraphicsAPI&&) = delete;

    // Converts the graphics API name into a specific filename
    static std::string GetAPIFilename(const char* apiName);

 private:
    GraphicsAPI() = default;
};
}

#endif