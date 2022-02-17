#include"helpSort.h"
int partition(int *a, int lo, int hi)
{
    int i = lo, j = hi;
    int pivot=a[lo];
    while (true)
    {
        while((pivot>a[++i]))  if(i == hi) break;
        while((pivot<a[--j]))  if(j == lo) break;    

        if(i>=j) break;
        swap(a, i, j);
    }
    swap(a, lo, j);
    
    return j;
}
void quickSort(int *a, int lo, int hi)
{
    if(lo>=hi) return;
    int pivot = partition(a, lo, hi);
    quickSort(a, lo, pivot);
    quickSort(a, pivot+1, hi);
}
int main()
{
    int a[] = {7, 6, 5, 4, 3, 2, 1};
    show(a, 7);
    quickSort(a, 0, 7);
    show(a, 7);
}