#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int reverse(int x)
{
    int res = 0, num = 0;
    // 9646324350
    while (x != 0)
    {
        num = x % 10;
        if (res <= INT_MAX / 10 && res >= INT_MIN / 10)
            res = res * 10 + num;
        else
            return 0;
        x /= 10;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    int x = -2147483648;
    printf("%d", reverse(x));
    return 0;
}
