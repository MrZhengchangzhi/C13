#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLdatatype;

typedef struct SeqList
{
	int* a;
	int size;
	int capacity;
}SL;

void SeqListInit(SL* psl);
void SeqListPrint(SL* psl);
void CheckCapacity(SL* psl);
void SeqListDestroy(SL* psl);
void SeqListPushback(SL* psl, SLdatatype x);
void SeqListPushFront(SL* psl, SLdatatype x);
void SeqListPopFront(SL* psl);
void SeqListPopBack(SL* psl);
int SeqListFind(SL* psl,SLdatatype x);
void SeqListModify(SL* psl,SLdatatype x);