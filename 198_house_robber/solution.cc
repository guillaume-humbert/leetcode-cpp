#include "hr.h"
#include <vector>

int max(int a, int b)
{
    return a > b ? a : b;
}

int houseRobber(const std::vector<int> &nums)
{
    int a = 0, b = 0, c = 0;

    for (int i = nums.size() - 1; i >= 0; --i)
    {
        a = max(b, nums[i] + c);
        c = b;
        b = a;
    }
    return a;
}

