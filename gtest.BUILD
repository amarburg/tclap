cc_library(
    name = "main",
    srcs = glob(
        [
            "googletest/include/**/*.h",
            "googletest/src/*.cc",
            "googletest/src/*.h",
        ],
        exclude = [
            "googletest/include/gtest/gtest.h",
            "googletest/src/gtest-all.cc",
        ]
    ),
    hdrs = [
        "googletest/include/gtest/gtest.h",
    ],
    copts = [
        "-Iexternal/gtest/googletest/include",
        "-Iexternal/gtest/googletest",
    ],
    linkopts = ["-pthread"],
    visibility = ["//visibility:public"],
)
