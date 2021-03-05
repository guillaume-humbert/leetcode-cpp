add_library(ks STATIC ks.cc ks.h)

add_executable(testks testks.cc)
target_link_libraries(testks PUBLIC gtest_main ks)
add_test(NAME testks COMMAND testks)
