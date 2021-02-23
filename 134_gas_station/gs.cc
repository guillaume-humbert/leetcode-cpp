#include "gs.h"

int gs(const std::vector<int> &gas, const std::vector<int> &cost)
{
    int i = 0;
    int j = 0;
    int curr_gas = 0;

    while (i < gas.size())
    {
        curr_gas = gas[i] - cost[i];
   
        for (j = i + 1; curr_gas >= 0; ++j)
        {
            j %= gas.size();

            if (i == j)
                return i;

            curr_gas += gas[j] - cost[j];
        }
        if (j > i)
            i = j;
        else
            return -1;
    }
    return -1;
}
