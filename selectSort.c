#include "helpSort.h"
selectSort(int *a, int length)
{
    int n = length;
    for (int i = 0; i<length-1; i++)
    {
        int min_index = i;
        for(int j = min_index+1; j<length; j++)
        {
            if(a[j]<a[i]) 
            {   
                min_index = j;
                swap(a, min_index, i);
            }
        }
    }
}
int main()
{
    int a[] = {4, 3, 9, 6, 7, 7, 8, 1, 5, 10, 0, 22};
    show(a, 12);
    selectSort(a, 12);
    show(a, 12);
    return 0;
}