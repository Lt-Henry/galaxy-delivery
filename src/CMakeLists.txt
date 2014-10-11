
#minimum cmake version
cmake_minimum_required (VERSION 2.6)

#project name
project (galaxy-delivery)

#create an executable as target
add_executable(galaxy main.cpp Core.cpp Game.cpp Actors.cpp Sprite.cpp)

#require pkg-config support
find_package(PkgConfig REQUIRED)

#required pkg-config libs
pkg_check_modules(SDL2 REQUIRED sdl2)
pkg_check_modules(SDL2_IMG REQUIRED SDL2_image)


#add include dirs
include_directories(${SDL2_INCLUDE_DIRS} ${SDL_IMG_INCLUDE_DIRS})

#add custom lib flags
add_definitions(-std=c++11 -O2)

#set link libraries
target_link_libraries(galaxy-delivery ${SDL2_LIBRARIES} ${SDL2_IMG_LIBRARIES})




