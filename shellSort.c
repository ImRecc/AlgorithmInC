#include "helpSort.h"
void shellSort(int *a, int length)
{
    int step = 1;
    while(step < length/3) step = step*3 + 1;
    while(step >= 1)
    {
        for(int i = step; i<length; i++)
        {
            for(int N = i; N>=step&&(a[N]<a[N-step]); N-=step)
            {
                swap(a, N, N-step);
            }
        }
        step /= 3;
    }
}
int main()
{
    int a[]={15, 14, 13, 12, 10, 11, 8, 9, 6, 7, 5, 2, 4, 3, 1};
    show(a, 15);
    shellSort(a, 15);
    show(a, 15);
}