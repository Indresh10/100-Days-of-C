#include <stdio.h>
int searchInsert(int *nums, int numsSize, int target)
{
    int low = 0, high = numsSize - 1,
        mid = 0;
    while (high >= low)
    {
        mid = (low + high) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}
int main(int argc, char const *argv[])
{
    int list[] = {1, 2, 5, 7};
    printf("Element at %d", searchInsert(list, 4, 3));
    return 0;
}
