#include <stdio.h>

int main()
{
    int mat[4][5] = {{1, 2, 1, 4, 8},
                     {3, 7, 8, 5, 1},
                     {8, 7, 7, 3, 1},
                     {8, 1, 2, 7, 9}};
    int com[5] = {0, 0, 0, 0, 0};
    int k = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (mat[0][i] == mat[1][j])
            {
                if (com[k - 1] != mat[0][i])
                {
                    com[k] = mat[0][i];
                    k++;
                }
            }
        }
    }
    for (int i = 2; i < 4; i++)
    {
        for (int c = 0; c < k; c++)
        {
            int j;
            for (j = 0; j < 5; j++)
            {
                if (com[c] == mat[i][j])
                    break;
            }
            if (com[c] != mat[i][j])
                com[c] = 0;
        }
    }

    for (int i = 0; i < k; i++)
    {
        if (com[i] != 0)
            printf("%d ", com[i]);
    }

    return 0;
}