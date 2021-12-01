#include <stdio.h>
#include "my_mat.h"
#include <math.h>

void isPathExists(int mat[LEN][LEN], int i, int j)
{
    if (mat[i][j] != 0 && mat[i][j] < INFT)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}

void minimalPath(int mat[LEN][LEN], int i, int j)
{
    if (mat[i][j] != 0 && mat[i][j] < INFT)
    {
        printf("%d\n", mat[i][j]);
    }
    else
    {
        printf("-1\n");
    }
    return 1;
}

void getMinimalMat(int mat[][LEN])
{

    for (int i = 0; i < LEN; i++)
    {
        for (int j = 0; j < LEN; j++)
        {
            (scanf("%d", &mat[i][j]));
            if (mat[i][j] == 0 && i != j)
            {
                mat[i][j] = INFT;
            }
        }
    }
    for (int l = 0; l < LEN; l++)
    {
        for (int m = 0; m < LEN; m++)
        {
            for (int n = 0; n < LEN; n++)
            {
                mat[m][n] = fmin(mat[m][n], mat[m][l] + mat[l][n]);
            }
        }
    }
}
