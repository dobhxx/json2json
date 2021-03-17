
cc_library(
    name = "gtest",
    srcs = [
        "src/gtest-death-test.cc",
        "src/gtest-filepath.cc",
        "src/gtest-port.cc",
        "src/gtest-printers.cc",
        "src/gtest-test-part.cc",
        "src/gtest-typed-test.cc",
        "src/gtest.cc",
    ],
    hdrs = [
        "include/gtest/gtest-death-test.h",
        "include/gtest/gtest-message.h",
        "include/gtest/gtest-param-test.h",
        "include/gtest/gtest-printers.h",
        "include/gtest/gtest-spi.h",
        "include/gtest/gtest-test-part.h",
        "include/gtest/gtest-typed-test.h",
        "include/gtest/gtest.h",
        "include/gtest/gtest_prod.h",
        "include/gtest/internal/gtest-death-test-internal.h",
        "include/gtest/internal/gtest-filepath.h",
        "include/gtest/internal/gtest-internal.h",
        "include/gtest/internal/gtest-linked_ptr.h",
        "include/gtest/internal/gtest-param-util-generated.h",
        "include/gtest/internal/gtest-param-util.h",
        "include/gtest/internal/gtest-port.h",
        "include/gtest/internal/gtest-string.h",
        "include/gtest/internal/gtest-type-util.h",
        "src/gtest-internal-inl.h",
    ],
    includes = ['.', 'include'],
    deps = [
    ],
    copts = [
        "-Imm3rd/gtest-1.8.1/.",
        "-Imm3rd/gtest-1.8.1/src",
    ],
    linkopts = [
        "-lpthread",
    ],
    visibility = ["//visibility:public"],
)


cc_library(
    name = "gtest_main",
    srcs = [
        "src/gtest_main.cc",
    ],
    hdrs = [
        "include/gtest/gtest-death-test.h",
        "include/gtest/gtest-message.h",
        "include/gtest/gtest-param-test.h",
        "include/gtest/gtest-printers.h",
        "include/gtest/gtest-test-part.h",
        "include/gtest/gtest-typed-test.h",
        "include/gtest/gtest.h",
        "include/gtest/gtest_prod.h",
        "include/gtest/internal/gtest-death-test-internal.h",
        "include/gtest/internal/gtest-filepath.h",
        "include/gtest/internal/gtest-internal.h",
        "include/gtest/internal/gtest-linked_ptr.h",
        "include/gtest/internal/gtest-param-util-generated.h",
        "include/gtest/internal/gtest-param-util.h",
        "include/gtest/internal/gtest-port.h",
        "include/gtest/internal/gtest-string.h",
        "include/gtest/internal/gtest-type-util.h",
    ],
    includes = ['.', 'include'],
    deps = [
        "//mm3rd/gtest-1.8.1:gtest",
        "//mm3rd/glog:glog",
        "//mm3rd/gflags/src:gflags",
    ],
    copts = [
        "-Imm3rd/gtest-1.8.1/.",
        "-Imm3rd/gtest-1.8.1/src",
    ],
    linkopts = [
    ],
    visibility = ["//visibility:public"],
)

