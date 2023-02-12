#include <stdio.h>
#include <math.h>
int isInteger(double n)
{
    int x = n;
    if (n - x == 0)
        return 1;
    else
        return 0;
}

int isPowerOfThree(int n)
{
    double ans = log10(n) / log10(3);
    return isInteger(ans);
}

int main(int argc, char const *argv[])
{
    int x = isPowerOfThree(243);
    printf(x == 1 ? "true" : "false");
    return 0;
}
