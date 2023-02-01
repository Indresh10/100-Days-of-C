#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 5;
    int arr[] = {7, 5, 2, 1, 1};
    int minpos = getMinPos(arr, n);
    int max = getMax(arr, n, minpos);
    printf("%d\n", max - arr[minpos]);
    return 0;
}
int getMinPos(int *arr, int n)
{
    int min = arr[0];
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            j = i;
        }
    }
    return j;
}

int getMax(int *arr, int n, int start)
{
    int max = arr[start];
    for (int i = start + 1; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}