#include "helpSort.h"
#include <stdlib.h>
struct heaps
{
    int N;
    int a[100];
};

struct heaps* initHeap()
{
    struct heaps* heap=(struct heaps*)malloc(sizeof(struct heaps));
    heap->N=0;
    heap->a[heap->N]=NULL;
    return heap;
}

void swim(struct heaps* heap, int k)       //该节点比他老子还大->上浮
{
    while(k>1&&heap->a[k]>heap->a[k/2])
    {
        swap(heap->a, k, k/2);
        k=k/2;
    }
}

void sink(struct heaps *heap, int k) //比他儿子小
{
    while(2*k<=heap->N)
    {
        int j=2*k;
        if(j<heap->N&&heap->a[j]<heap->a[j+1])  j++;    //找一找儿子里面最小的那个
        if((heap->a[k]>heap->a[j]) break;        //若不必其儿子小，那我折腾半天干嘛
        swap(heap->a, j, k);
        k=j;
    }
}

void heapInsert(struct heaps* heap, int insertVal)
{

    heap->a[++heap->N]=insertVal;
    swim(heap, heap->N);
}

int delMax(struct heaps* heap)
{
    int max=heap->a[1];
    swap(heap->a, 1, heap->N--);
    heap->a[heap->N+1]=NULL;
    sink(heap, 1);
    return max; 

}