#define _use _CRT_SECURE_NO_WARNINGS1.

#include "SeqList.h"



void SeqList()
{
	SL s;
	SeqListInit(&s);
	CheckCapacity(&s);
	SeqListPushback(&s, 1);
	SeqListPushback(&s, 2);
	SeqListPushback(&s, 3);
	SeqListPushback(&s, 4);
	SeqListPrint(&s);
	SeqListPushFront(&s, 10);
	SeqListPushFront(&s, 20);
	SeqListPrint(&s);
	SeqListPopFront(&s);
	SeqListPrint(&s);
	SeqListPopFront(&s);
	SeqListPrint(&s);
	SeqListPushback(&s, 15);
	SeqListPrint(&s);
	SeqListPushback(&s, 25);
	SeqListPrint(&s);
	SeqListPopBack(&s);
	SeqListPrint(&s);
	SeqListPopBack(&s);
	SeqListPrint(&s);
	/*int x=SeqListFind(&s, 0);
	if (x == -1)
	{
		printf("你要找的数不存在\n");
		return;
	}
	printf("你要查找的数下标为>:%d\n", x);*/
	SeqListModify(&s,100);

	SeqListPrint(&s);
	SeqListDestroy(&s);
}

void SLtest1()
{
	SeqList();
}

int main() 
{
	SLtest1();
	return 0;
}