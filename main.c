#include <stdio.h>
#include "my_mat.h"

int main()
{
    // init default
    char data = 'O';
    int mat[LEN][LEN] = {0};

    while (data != 'D') // Not the last
    {
        scanf("%c", &data);
        switch (data)
        {
        case 'A':
            getMinimalMat(mat);
            break;

        case 'B':
            int i;
            int j;
            scanf(" %d%d", &i, &j);
            isPathExists(mat, i, j);
            break;

        case 'C':
            int i;
            int j;
            scanf(" %d%d", &i, &j);
            minimalPath(mat, i, j);
            break;
        }
    }
}
