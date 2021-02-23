#include "ts.h"
#include "gtest/gtest.h"
#include <vector>

void runTest(const std::vector<int> &nums, int target, const std::vector<int> &expected)
{
    EXPECT_EQ(twoSum(nums, target), expected);
}

TEST(TwoSum, Typical)
{
    
    runTest({1, 3, 4, 11}, 4, {0, 1});
    runTest({1, 3, 4, 11}, 5, {0, 2});
    runTest({1, 3, 4, 11}, 12, {0, 3});
    runTest({1, 3, 4, 11}, 7, {1, 2});
    runTest({1, 3, 4, 11}, 14, {1, 3});
    runTest({1, 3, 4, 11}, 15, {2, 3});
}

TEST(TwoSum, Repeating)
{
    runTest({3, 3}, 6, {0, 1});
    runTest({1, 3, 3}, 6, {1, 2});
    runTest({1, 3, 3, 4}, 6, {1, 2});
}
