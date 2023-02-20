#include <stdio.h>
#include <stdlib.h>
double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2, int nums2Size)
{
    int i = 0, j = 0, k = 0, m = nums1Size, n = nums2Size;
    int c[m + n];
    int mid = (m + n) / 2;
    while (k <= mid)
    {
        if (nums1[i] <= nums2[j])
        {
            c[k] = nums1[i];
            i++;
            k++;
        }
        if (nums1[i] > nums2[j])
        {
            c[k] = nums2[j];
            j++;
            k++;
        }
        if (i == m)
        {
            c[k] = nums2[j];
            j++;
            k++;
        }
        if (j == n)
        {
            c[k] = nums1[i];
            i++;
            k++;
        }
    }
    double res = 0;
    if ((m + n) % 2 == 0)
    {
        res = c[mid] + c[mid - 1];
        res /= 2;
    }
    else
    {
        res = c[mid];
    }
    return res;
}

int main(int argc, char const *argv[])
{
    int arr1[] = {1, 2};
    int arr2[] = {3, 4};
    printf("%f\n", findMedianSortedArrays(arr1, 2, arr2, 2));
    return 0;
}
