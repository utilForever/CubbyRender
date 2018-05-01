# CubbyRender

<img src="https://github.com/utilForever/CubbyRender/blob/master/Logo.png" align="center" />

CubbyRender is open-source, cross-platform rendering engine that supports DirectX 11/12, OpenGL and Vulkan.
The code is built on C++17 and can be compiled with commonly available compilers such as g++, clang, and MSVC.
Currently tested platforms are Ubuntu (14.04 or later) and Windows (Visual Studio 2017 or later).

[![License](https://img.shields.io/badge/Licence-MIT-blue.svg)](https://github.com/utilForever/CubbyRender/blob/master/LICENSE)

## Features

### Productivity Features

- Simple, easy to use OO interface designed to minimise the effort required to render 3D scenes, and to be independent of 3D implementation i.e. Direct3D/OpenGL.
- Extensible example framework makes getting your application running is quick and Simple
- Clean, uncluttered design and full documentation of all engine classes

### Platform & 3D API support

- Direct3D 11, Direct3D 12, OpenGL 4+ and Vulkan support
- Windows (all major versions), Linux, Mac OSX support
- Builds on various compilers such as MSVC, g++, and clang

### Material / Shader support

- Supports vertex and fragment programs (shaders), both low-level programs written in assembler, and high-level programs written in Cg, DirectX9 HLSL, or GLSL and provides automatic support for many commonly bound constant parameters like worldview matrices, light state information, object space eye position etc
- Supports the complete range of fixed function operations such as multitexture and multipass blending, texture coordinate generation and modification, independent colour and alpha operations for non-programmable hardware or for lower cost materials
- Load textures from PNG, JPEG, TGA, BMP or DDS files, including unusual formats like 1D textures, volumetric textures, cubemaps and compressed textures (DXT/S3TC)

### Meshes

- Flexible mesh data formats accepted, separation of the concepts of vertex buffers, index buffers, vertex declarations and buffer mappings
- Biquadric Bezier patches for curved surfaces
- Progressive meshes (LOD), manual or automatically generated

### Animation

- Sophisticated skeletal animation support
- Flexible shape animation support

### Scene Features

- Highly customisable, flexible scene management, not tied to any single scene type. Use predefined classes for scene organisation if they suit or plug in your own subclass to gain full control over the scene organisation
- Several example plugins demonstrate various ways of handling the scene specific to a particular type of layout (e.g. BSP, Octree)
- Multiple shadow rendering techniques, both modulative and additive techniques, stencil and texture based, each highly configurable and taking full advantage of any hardware acceleration available

### Special Effects

- Compositor system, allowing for full-screen postprocessing effects to be defined easily, via scripts if desired
- Particle Systems, including easily extensible emitters, affectors and renderers (customisable through plugins). Systems can be defined in text scripts for easy tweaking. Automatic use of particle pooling for maximum performance
- Support for skyboxes, skyplanes and skydomes, very easy to use
- Billboarding for sprite graphics

### Misc features

- Common resource infrastructure for memory management and loading from archives (ZIP, PK3)
- Debugging memory manager for identifying memory leaks
- XMLConverter to convert efficient runtime binary formats to/from XML for interchange or editing
- Sample library + browser that showcases many features

## Documentation

TBA

## How To Contribute

Contributions are always welcome, either reporting issues/bugs or forking the repository and then issuing pull requests when you have completed some additional coding that you feel will be beneficial to the main project. If you are interested in contributing in a more dedicated capacity, then please contact me.

## Contact

You can contact me via e-mail (utilForever at gmail.com). I am always happy to answer questions or help with any issues you might have, and please be sure to share any additional work or your creations with me, I love seeing what other people are making.

## License

<img align="right" src="http://opensource.org/trademarks/opensource/OSI-Approved-License-100x137.png">

The class is licensed under the [MIT License](http://opensource.org/licenses/MIT):

Copyright &copy; 2018 [Chris Ohk](http://www.github.com/utilForever), [Kyowon Yang](https://github.com/HoRangDev), [Seonwoo Lee](https://github.com/zzz664) and [Bumsu Park](https://github.com/C9bumsu).

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.