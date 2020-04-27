add_library(
        sort
        src/sort/sort.c
        src/sort/sort.h
)

target_include_directories(sort PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")