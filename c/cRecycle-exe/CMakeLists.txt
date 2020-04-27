add_executable(c main.c)

target_link_libraries(c PRIVATE search)
target_link_libraries(c PRIVATE sort)
target_link_libraries(c PRIVATE struct)