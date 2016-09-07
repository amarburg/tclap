cc_library(
    name = "tclap",
    hdrs = glob([
        "include/tclap/*.h",
    ]),
    includes = [
        "include",
    ],
    copts = [
        "-std=c++11",
        "-Wall",
    ],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "ut",
    srcs = ["tests/tclap_ut.cpp"],
    copts = [
        "-Iexternal/gtest/googletest/include",
    ],
    deps = [
        "@gtest//:main",
        ":tclap",
    ],
    linkopts = [
        "-lm",
    ],
)
