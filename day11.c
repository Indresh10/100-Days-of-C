#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct map
{
    char key;
    int val;
} map;
map **maps;
char *unq;
int mapCnt = 0;

int exists(char *str, char x)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (x == str[i])
            return 1;
    }
    return 0;
}
void setMap(char *str, int len)
{
    unq = malloc(len * sizeof(char));
    int j = 0;
    for (int i = 0; i < len; i++)
    {
        if (exists(unq, str[i]) == 0)
        {
            unq[j] = str[i];
            j++;
        }
    }
    maps = malloc(strlen(unq) * sizeof(struct map *));
    for (int i = 0; i < strlen(unq); i++)
    {
        maps[i] = malloc(sizeof(map));
        maps[i]->key = unq[i];
        maps[i]->val = 0;
    }
    mapCnt = strlen(unq);
}

map *findMap(char key)
{
    for (int i = 0; i < mapCnt; i++)
    {
        if (maps[i]->key == key)
            return maps[i];
    }
    return NULL;
}

int mapLen()
{
    int cnt = 0;
    for (int i = 0; i < mapCnt; i++)
    {
        if (maps[i]->val != 0)
            cnt++;
    }
    return cnt;
}
int main(int argc, char const *argv[])
{
    char *str = "aabcbcdbca";
    setMap(str, strlen(str));
    int j = 0;
    int res = strlen(str);
    for (int i = 0; i < strlen(str); i++)
    {
        findMap(str[i])->val++;
        if (mapLen() == mapCnt)
        {
            while (findMap(str[j])->val > 1)
            {
                findMap(str[j])->val--;
                j++;
            }
            int len = i - j + 1;
            res = res > len ? len : res;
        }
    }
    printf("%d\n", res);

    return 0;
}