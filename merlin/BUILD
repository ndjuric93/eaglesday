cc_library(
    name = "merlin_engine",
    srcs = glob(["src/*.cpp", "include/*.hpp"]),
    hdrs = [
        "include/game.hpp",
        "include/window.hpp",
        "include/image_bmp.hpp",
        "include/asset_manager.hpp",
        "include/event_manager.hpp",
    ],
    include_prefix = "merlin",
    strip_include_prefix = "include",
    linkopts = [
        "-lSDL2",
    ],
    copts = ["-std=c++17"],
    visibility = ["//visibility:public"]
)
