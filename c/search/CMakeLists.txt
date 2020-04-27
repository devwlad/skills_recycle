add_library(
        search
        src/search/search.c
        src/search/search.h
)

target_include_directories(search PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")