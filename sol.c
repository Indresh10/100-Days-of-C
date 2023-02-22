#include <stdio.h>
#include <stdbool.h>
int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int majorityElement(int a[], int size)
{
    qsort(a, size, sizeof(int), cmpfunc);
    int curr = -1, mcnt = 0, j = 0, cnt = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[j] == a[i])
            cnt++;
        else
        {
            j = i;
            cnt = 1;
        }
        if (cnt > mcnt)
        {
            curr = i;
            mcnt = cnt;
        }
    }

    if (mcnt > size / 2)
    {
        return a[curr];
    }
    return -1;
    // your code here
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", arr[i]);
        }
        printf("%d\n", majorityE1ement(arr, n));
    }
    return 0;
}