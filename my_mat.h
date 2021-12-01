#include <stdio.h>

#ifndef MYMAT_H
#define MYMAT_H
#endif

#ifndef LEN
#define LEN 10
#endif

#ifndef INFT
#define INFT 100000000000
#endif

void isPathExists(int[LEN][LEN], int i, int j);
void minimalPath(int arr[LEN][LEN], int i, int j);
void getMinimalMat(int arr[][LEN]);
#endif