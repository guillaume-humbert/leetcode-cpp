add_library(134_gas_station STATIC gs.cc gs.h)

add_executable(test_134_gas_station testgs.cc)
target_link_libraries(test_134_gas_station PUBLIC gtest_main 134_gas_station)
add_test(NAME test_134_gas_station COMMAND test_134_gas_station)
