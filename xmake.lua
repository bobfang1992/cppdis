add_rules("mode.debug", "mode.release")
set_languages("c++20")

add_requires("gtest")

target("cppdis")
    set_kind("binary")
    add_files("src/*.cpp")

target("test")
    set_kind("binary")
    add_files("test/*.cpp")
    add_deps("cppdis")
    add_packages("gtest")
    add_includedirs("src")

