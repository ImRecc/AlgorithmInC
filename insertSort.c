#include "helpSort.h"

void insertSort(int *a, int length)
{
    for(int i = 1; i<length; i++)
    {
        for(int j = i;j>0 && (a[j]<a[j-1]); j--)
        {
            swap(a, j, j-1);
        }
    }
}
int main()
{
    int a[] = {4, 3, 9, 6, 7, 1};
    show(a, 6);
    insertSort(a, 6);
    show(a, 6);
    return 0;
}