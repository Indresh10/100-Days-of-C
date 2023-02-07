#include <stdio.h>
#include <limits.h>
int main(int argc, char const *argv[])
{
    int numsSize = 5;
    int nums[] = {3, 5, 0, 3, 4};
    int right = INT_MAX, mid = INT_MIN, left = INT_MIN;
    for (int i = numsSize - 1; i > 0; i--)
    {
        if (nums[i] < right)
        {
            right = nums[i];
        }
        int j = (i - 1) >= 0 ? i - 1 : 0;
        if (nums[j] > right)
        {
            mid = nums[j];
        }
        j = (i - 2) >= 0 ? i - 2 : 0;
        if (nums[j] < mid && nums[j] < right)
        {
            left = nums[j];
            printf("true");
        }
    }
    printf("false");
    return 0;
}
