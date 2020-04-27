add_library(
        struct
        src/struct/struct.c
        src/struct/struct.h
)

target_include_directories(struct PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")