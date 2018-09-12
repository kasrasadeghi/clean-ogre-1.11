cmake_minimum_required (VERSION 3.3.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(OgreTutorialBootstrap)

## [discover_ogre]
# specify which version and components you need
find_package(OGRE 1.11 REQUIRED COMPONENTS Bites RTShaderSystem)

# copy resource.cfg next to our binaries where OGRE looks for it
file(COPY ${OGRE_CONFIG_DIR}/resources.cfg DESTINATION ${CMAKE_BINARY_DIR})
## [discover_ogre]

add_executable(0_Bootstrap Bootstrap.cpp)
target_link_libraries(0_Bootstrap ${OGRE_LIBRARIES})

target_link_libraries(0_Bootstrap "/home/kasra/lib/build-ogre-1.11.2/freetype-2.9/objs/libfreetype.so.2.9")
