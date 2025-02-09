cmake_minimum_required(VERSION 3.10)

project(Engine)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_executable(Engine 
    src/main.cpp
    src/Engine.cpp
    src/GameObject.cpp
    projectdir/Game.cpp
)

target_include_directories(Engine PRIVATE include)

if(WIN32)
    set(RAYLIB_DIR "C:/raylib") 
    target_include_directories(Engine PRIVATE ${RAYLIB_DIR}/include)
    target_link_directories(Engine PRIVATE ${RAYLIB_DIR}/lib)
    target_link_libraries(Engine raylib)
    add_custom_command(TARGET Engine POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${RAYLIB_DIR}/lib/raylib.dll"
        $<TARGET_FILE_DIR:Engine>)
elseif(UNIX)
    find_package(raylib REQUIRED)
    target_link_libraries(Engine raylib)
endif()