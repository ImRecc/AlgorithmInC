#include <stdlib.h>
#include <stdio.h>
void res(int *a, int val)
{
    a[2] = val;
}
int main()
{
    int a[] = {1, 3, 3, 4};
    res(a, 5);
    for(int i = 0; i<4;i++) printf("%d ", a[i]);
}