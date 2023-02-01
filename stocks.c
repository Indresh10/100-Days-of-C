#include <stdio.h>

int main(int argc, char const *argv[])
{
    int pricesSize = 6;
    int prices[] = {7, 1, 5, 3, 6, 4};
    int l = 0;
    int res = 0;
    for (int r = 1; r < pricesSize; r++)
    {
        int cur = prices[r] - prices[l];
        if (prices[l] < prices[r])
        {
            if (res < cur)
                res = cur;
        }
        else
            l = r;
    }
    return res;
}