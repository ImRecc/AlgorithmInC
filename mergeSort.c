#include "helpSort.h"
void merge(int *a, int lo, int mid, int hi, int *aux)
{
    int i = lo, j = mid+1; //left and right flag
    for(int k = lo; k<= hi; k++)
        aux[k] = a[k];
    
    for(int k = lo; k<=hi; k++)
    {
        if(i>mid) a[k] = aux[j++];          //left side cleared
        else if(j>hi) a[k] = aux[i++];      //right side cleared
        else if(aux[i]<aux[j]) a[k] = aux[i++];
        else a[k] = aux[j++];
    }

}
void mergeSort(int *a, int length)
{
    int aux[length];
    sort(a, 0, length-1);
}
void sort(int *a, int lo, int hi)
{
    if(lo>=hi) return;
    int mid = (hi+lo)/2;
    sort(a, lo, mid);
    sort(a, mid+1, hi);
    merge(a, lo, mid, hi, aux);
}



int main()  
{
    int length = 6;
    int a[] = {4, 3, 9, 6, 7, 1};
    show(a, length);
    mergeSort(a, length);
    show(a, length);
    return 0;
}