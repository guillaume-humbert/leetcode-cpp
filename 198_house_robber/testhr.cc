#include "hr.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HouseRobber, Scenario1)
{
    EXPECT_EQ(houseRobber({1, 2, 3, 1}), 4);
}

TEST(HouseRobber, Scenario2)
{
    EXPECT_EQ(houseRobber({2, 7, 9, 3, 1}), 12);
}

TEST(HouseRobber, Scenario3)
{
    EXPECT_EQ(houseRobber({}), 0);
}

TEST(HouseRobber, Scenario4)
{
    EXPECT_EQ(houseRobber({1, 2}), 2);
}

TEST(HouseRobber, Scenario5)
{
    EXPECT_EQ(houseRobber({1}), 1);
}

