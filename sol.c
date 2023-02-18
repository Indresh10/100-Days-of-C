#include <stdio.h>
int checkRecord(char *s)
{
    int acnt = 0, lcnt = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        switch (s[i])
        {
        case 'A':
            acnt++;
            lcnt = 0;
            if (acnt == 2)
                return 0;
            break;
        case 'L':
            lcnt++;
            if (lcnt == 3)
                return 0;
            break;
        case 'P':
            lcnt = 0;
            break;
        }
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    char s[] = "PALLAP";
    printf(checkRecord(s) == 1 ? "True" : "False");
    return 0;
}
