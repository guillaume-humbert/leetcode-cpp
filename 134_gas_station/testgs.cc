#include "gs.h"
#include "gtest/gtest.h"
#include <vector>

TEST(GasStation, Scenario1)
{
    EXPECT_EQ(gs({1, 2, 3, 4, 5}, {3, 4, 5, 1, 1}), 3);
}

TEST(GasStation, Scenario2)
{
    EXPECT_EQ(gs({2, 3, 4}, {3, 4, 3}), -1);
    EXPECT_EQ(gs({1}, {1}), 0);
    EXPECT_EQ(gs({1}, {2}), -1);
}

TEST(GasStation, Scenario3)
{
    EXPECT_EQ(gs({1,2,3,4,3,2,4,1,5,3,2,4}, {1,1,1,3,2,4,3,6,7,4,3,1}), -1);
}

TEST(GasStation, Scenario4)
{
    EXPECT_EQ(gs({1, 2, 3, 4, 5}, {3, 4, 5, 1, 2}), 3);
}

TEST(GasStation, Scenario5)
{
    EXPECT_EQ(gs({3, 1, 1}, {1, 2, 2}), 0);
}
