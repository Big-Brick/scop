cmake_minimum_required(VERSION 3.9)

set(CMAKE_VERBOSE_MAKEFILE ON)

set(INC include)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR})

set(NAME1 scop)
project(${NAME1} C)
find_package(OpenGL REQUIRED)

set(LIBFT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Libs/libft)
set(LIBFT_BINARY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Libs/libft/CMakeFiles)

add_subdirectory(${LIBFT_SOURCE_DIR} ${LIBFT_BINARY_DIR})

find_package(SDL2 REQUIRED)

set(SRCS1
	src/main.c src/read_obj.c src/read_v.c include/scop.h src/read_f.c)

set(CMAKE_C_FLAGS "-Wall -Werror -Wextra")

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR} CACHE PATH "Executable output dir" FORCE)

add_executable(${NAME1} ${SRCS1})

target_include_directories(${NAME1} PRIVATE
	${CMAKE_CURRENT_SOURCE_DIR}/${INC}/
	${OPENGL_INCLUDE_DIRS}
	${LIBFT_INC}
	${SDL2_INCLUDE_DIR})

target_link_libraries(${NAME1}
	${OPENGL_LIBRARIES}
	libft.a
	${SDL2_LIBRARY})
