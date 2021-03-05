#include "gs.h"
#include <vector>

int gs(const std::vector<int> &gas, const std::vector<int> &cost)
{
    int start = gas.size() - 1, end = 0;
    int currGas = gas[start] - cost[start];

    while (start > end)
    {
        if (currGas >= 0)
        {
            currGas += gas[end] - cost[end];
            ++end;
        }
        else
        {
            --start;
            currGas += gas[start] - cost[start];
        }
    }
    return currGas >= 0 ? start : -1;
}
