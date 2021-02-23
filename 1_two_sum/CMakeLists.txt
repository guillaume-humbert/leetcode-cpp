add_library(1_two_sum STATIC ts.cc ts.h)

add_executable(test_1_two_sum testts.cc)
target_link_libraries(test_1_two_sum PUBLIC gtest_main 1_two_sum)
add_test(NAME test_1_two_sum COMMAND test_1_two_sum)
