#include <stdio.h>
#include <string.h>
char ro[20] = "";
char lit[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
int getCnt(int x)
{
    int cnt = 0;
    while (x > 0)
    {
        cnt++;
        x /= 10;
    }
    return cnt;
}
int power(int base, int p)
{
    if (p == 0)
        return 1;
    else if (p == 1)
        return base;
    else
        return base * power(base, p - 1);
}
int main(int argc, char const *argv[])
{
    int x;
    scanf("%d", &x);
    char roman[20] = "";
    int cnt = getCnt(x) - 1;
    int j = 0;
    int num = x;
    while (num > 0)
    {
        int msb = num / power(10, cnt);
        num %= power(10, cnt);
        if (cnt == 3)
        {
            for (int i = 0; i < msb; i++)
            {
                roman[j] = lit[6];
                j++;
            }
        }
        else
        {
            if (msb == 9 || msb == 4) // ix
            {
                roman[j] = lit[2 * cnt];
                j++;
                roman[j] = lit[(2 * cnt) + (msb == 9 ? 2 : 1)];
                j++;
            }
            else
            {
                int temp = msb;
                if (msb >= 5)
                {
                    roman[j] = lit[(2 * cnt) + 1];
                    j++;
                    temp -= 5;
                }
                for (int i = 0; i < temp; i++)
                {
                    roman[j] = lit[2 * cnt];
                    j++;
                }
            }
        }
        cnt--;
    }
    strcpy(ro, roman);
    printf("%s", roman);
    return 0;
}
