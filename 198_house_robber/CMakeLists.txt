add_library(198_house_robber STATIC hr.cc hr.h)

add_executable(test_198_house_robber testhr.cc)
target_link_libraries(test_198_house_robber PUBLIC gtest_main 198_house_robber)
add_test(NAME test_198_house_robber COMMAND test_198_house_robber)
