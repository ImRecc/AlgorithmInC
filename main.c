//how the heck there is no main but a sortS.h ..
#include "helpSort.h"
#include "heapSort.h"
int main()
{ 
   int ar[]={0, 4, 3, 9, 6, 7, 8, 1};
   int length = 8;
   show(ar, length);
   heapSort(ar, length-1);  
   show(ar, length);
   return 0;
}