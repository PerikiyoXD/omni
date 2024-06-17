add_rules("mode.debug", "mode.release")

add_requires("pacman::SDL2", {alias = "sdl2"})

target("omni")
    set_kind("binary")
    add_files("src/*.cpp")
    add_packages("sdl2")
    