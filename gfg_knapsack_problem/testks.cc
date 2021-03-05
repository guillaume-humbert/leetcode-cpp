#include "ks.h"
#include "gtest/gtest.h"
#include <vector>

TEST(TestKnapSack, Scenario1)
{
    int weight = 5;
    std::vector<int> item_weights = {1, 2, 3};
    std::vector<int> item_vals = {60, 100, 120};
    EXPECT_EQ(knapSack(weight, item_weights, item_vals), 220);
}

TEST(TestKnapSack, Scenario2)
{
    int weight = 5;
    std::vector<int> item_weights = {3, 2, 1};
    std::vector<int> item_vals = {30, 20, 50};
    EXPECT_EQ(knapSack(weight, item_weights, item_vals), 80);
}

TEST(TestKnapSack, Scenario3)
{
    int weight = 4;
    std::vector<int> item_weights = {4, 5, 1};
    std::vector<int> item_vals = {1, 2, 3};
    EXPECT_EQ(knapSack(weight, item_weights, item_vals), 3);
}

TEST(TestKnapSack, Scenario4)
{
    int weight = 3;
    std::vector<int> item_weights = {4, 5, 6};
    std::vector<int> item_vals = {1, 2, 3};
    EXPECT_EQ(knapSack(weight, item_weights, item_vals), 0);
}

TEST(TestKnapSack, Scenario5)
{
    int weight = 41;
    std::vector<int> item_weights = {83,84,85,76,13,87,2,23,33,82,79,100,88,85,91,78,83,44,4,50,11,68,90,88,73,83,46,16,7,35,76,31,40,49,65,2,18,47,55,38,75,58,86,77,96,94,82,92,10,86,54,49,65,44,77,22,81,52};
    std::vector<int> item_vals = {57,95,13,29,1,99,34,77,61,23,24,70,73,88,33,61,43,5,41,63,8,67,20,72,98,59,46,58,64,94,97,70,46,81,42,7,1,52,20,54,81,3,73,78,81,11,41,45,18,94,24,82,9,19,59,48,2,72};
    EXPECT_EQ(knapSack(weight, item_weights, item_vals), 223);
}

TEST(TestKnapSack, Scenario6)
{
    int weight = 12;
    std::vector<int> item_weights = {65,70,90,78,36,35,26,91,27,38,87,51,66,90,62,3,96,32,7,65,44,6,52,32,67,57,59,65,51,20,75,13,15,74,5};
    std::vector<int> item_vals = {12,35,37,38,72,2,67,30,60,22,100,4,9,83,49,76,3,70,46,91,78,73,87,34,46,47,12,84,66,55,18,95,71,66,31};
    EXPECT_EQ(knapSack(weight, item_weights, item_vals), 149);
}

TEST(TestKnapSack, Scenario7)
{
    int weight = 61;
    std::vector<int> item_weights = {36,5,5,65,88,26,57,21,28,61,97,21,60,9,91,21,35,64,78,35,10,47,64,31,23,61,4,47,16,38,43,91,77,89,42,10,38};
    std::vector<int> item_vals = {10,10,44,31,92,81,8,75,71,43,92,89,13,94,88,18,22,97,9,66,41,80,31,66,99,99,40,8,49,5,70,94,84,63,48,41,92};
    EXPECT_EQ(knapSack(weight, item_weights, item_vals), 359);
}

TEST(TestKnapSack, Scenario8)
{
    int weight = 83;
    std::vector<int> item_weights = {96,16,34,53,88,6,50,26,76,10,8,4,37,18,73,54,30,31,97,2,28,24,2,30,79,77,33,86};
    std::vector<int> item_vals = {55,61,51,75,17,22,4,13,39,28,77,49,46,91,14,67,88,62,25,37,69,38,59,62,48,88,100,53};
    EXPECT_EQ(knapSack(weight, item_weights, item_vals), 474);
}

TEST(TestKnapSack, Scenario9)
{
    int weight = 76;
    std::vector<int> item_weights = {34,48,30,26,31,28,74,57,46,96,39,89,12,67,48,38,64,47,12,58,88,66,48,48,98,33,45,87,47,74,60,55,31,8,55,14,99,29,11,40,72,7,82,91,21,2,97,12,6,29,37,21,33,54,70,45,81,75};
    std::vector<int> item_vals = {43,17,68,44,24,50,96,63,51,8,51,22,55,67,28,62,88,49,8,25,37,51,58,41,64,96,56,16,30,68,52,37,81,4,90,90,91,58,55,55,1,27,49,30,16,8,59,99,50,5,56,78,77,63,59,98,75,34};
    EXPECT_EQ(knapSack(weight, item_weights, item_vals), 427);
}