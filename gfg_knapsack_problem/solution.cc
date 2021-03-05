#include <vector>
#include <utility>

/*
Given weights and values of N items, put these items in a knapsack of capacity
"weight" to get the maximum total value in the knapsack. In other words, given
two integer arrays item_vals[0..n-1] and item_weights[0..n-1] which represent
values and weights associated with N items respectively.

Also given an integer "weight" which represents knapsack capacity, find out the
maximum value subset of item_vals[] such that sum of the weights of this subset
is smaller than or equal to "weight". You cannot break an item, either pick the
complete item or don’t pick it (0-1 property).
*/

int max(int a, int b)
{
    return a > b ? a : b;
}

int knapSack(int weight, const std::vector<int> &item_weights, const std::vector<int> &item_vals)
{
    std::vector<int> a(weight + 1);
    std::vector<int> b(weight + 1, 0);
    std::vector<int> tmp;

    for (int i = item_vals.size() - 1; i >= 0; --i)
    {
        for (int j = weight; j > 0; --j)
        {
            if (item_weights[i] > j)
                a[j] = b[j];
            else
                a[j] = max(item_vals[i] + b[j - item_weights[i]], b[j]);
        }
        tmp = std::move(a);
        a = std::move(b);
        b = std::move(tmp);
    }
    return b[weight];
}

