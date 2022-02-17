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

void selectSort(int *a, int length)
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