//note that this just a Sort function not dataStructure 'heap'
void sink2Sort(int *a, int k, int N)
{
    while(2*k<=N)
    {
        int j = 2*k;
        if(j<N&&(a[j]<a[j+1])) j++;
        if(a[k]>a[j]) break;
        swap(a, j, k);
        k=j;
        show(a, 8);

    }
}

//step1, make sure that heap are sequence
void heapSort(int *a, int N)     
{
    for(int k=N/2;k>=1;k--)  sink2Sort(a, k, N);
    show(a, N+1);
    while(N>1)
    {
        printf("ranking:\n");
        swap(a, 1, N--);
        printf("drop last: ");
        show(a, 8);
        sink2Sort(a, 1, N);
    }
}