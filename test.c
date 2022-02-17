#include"helpSort.h"
#include "heapSort.h"
int main()
{
    int a[] = {0, 4, 3, 9, 6, 7, 8, 1};
    int length=8;
    for(int k=(length-1)/2; k>=1;k--)
    {
        sink2Sort(a, k, length-1);
        show(a, length);
    }

    return 0;
}