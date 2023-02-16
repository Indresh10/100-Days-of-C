#include <stdio.h>
int main(int argc, char const *argv[])
{
    int nums[] = {1, 2};
    int prev = 0, numsSize = 2, cnt = 1;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != nums[prev])
        {
            cnt++;
            nums[cnt - 1] = nums[i];
            prev = i;
        }
    }
    for (int i = 0; i < cnt; i++)
    {
        printf("%d ", nums[i]);
    }
    return 0;
}
