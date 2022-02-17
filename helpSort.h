//目前只支持整型数组，
//show需要传入数组指针，数组长度，并按顺序输出一行，回车+换行
//swap需要数组指针，交换元素下标
#include<stdio.h>
void show(int *a, int length)
{
    for(int i=0; i<length; i++)
        printf("%d, ", a[i]);
    printf("\n");
}

void swap(int *a, int x, int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}