“sorts.h” 包含了《算法4》第二章的几种排序法的c语言实现
快速排序，希尔排序，插入排序，选择排序
未来可能会更新其他

对于归并排序的加入，
正在思考如何处理辅助数组问题
以及考虑非递归的实现
（c语言学艺不精是这样的）

"helpSort.h"包含了上述排序用到的swap操作，show操作，详细见helpSort.h描述

heap.c/h
堆排序、堆构造、二叉堆其实就是
说白了就是一棵树：每节点有俩孩子，且节点都比孩子打，这样一个大致排序的序列来构成一个优先级队列
而使用的存储方式仅仅是数组
0 1 2 3 4 5 6 7
- 8 5 4 4 3 2 3
表示        8
        5       4
    4    3    2     3
如何定位？若一节点位置为k
二叉堆上，子节点位置分别为2k与2k+1
通过简单的数学道理可知
三叉堆便是3k， 3k+1， 3k+2
这里与书上不同，我决定用min方法，以备后面生成树算法用
