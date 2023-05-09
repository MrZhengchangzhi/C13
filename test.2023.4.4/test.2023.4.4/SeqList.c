#define _use _CRT_SECURE_NO_WARNINGS1.

#include "SeqList.h"

void SeqListPrint(SL* psl)
{
	assert(psl);

	if (psl == NULL)
	{
		return;
	}
	for (int i = 0; i < psl->size; i++)
	{
		printf("%d ", psl->a[i]);
	}
	printf("\n");
}

void SeqListInit(SL* psl )
{
	assert(psl);

	psl->a = NULL;
	psl->capacity = psl-> size  = 0;
}

void CheckCapacity(SL* psl)
{
	assert(psl);

	if (psl->size==psl->capacity)
	{
		int Newcapacity = psl->capacity == 0 ? 4 : psl->capacity * 2;
		SLdatatype* tmp = (int*)realloc(psl->a, Newcapacity * sizeof(SLdatatype));
		if (tmp == NULL)
		{
			perror("malloc fail");
		}
		psl->a = tmp;
		psl->capacity = Newcapacity;
	}	
}

void SeqListPushback(SL* psl, SLdatatype x)
{
	assert(psl);

	if (psl == NULL)
	{
		perror("malloc fail");
	} 

	CheckCapacity(psl);
	psl->a[psl->size] = x;
	++psl->size;
}

void SeqListPushFront(SL* psl, SLdatatype x)
{
	assert(psl);
    CheckCapacity(psl);
	if (psl == NULL)
	{
		perror("malloc fail");
	}
	
	size_t end = psl->size;
	while (end >0)
	{
		psl->a[end] = psl->a[end-1];
		--end;
	}
	psl->a[0] = x;
	++psl->size;
}

void SeqListPopFront(SL* psl)
{
	assert(psl);
	if (psl == NULL)
	{
		perror("malloc fail");
	}
	int begin = 0;
	while (begin < psl->size-1)
	{
		psl->a[begin] = psl->a[begin + 1];
		++begin;
	}
	--psl->size;
}

void SeqListPopBack(SL* psl)
{
	assert(psl);
	if (psl == NULL)
	{
		perror("malloc fail");
	}
	if (psl->size < 0)
	{
		return;
	}
	--psl->size;
}

void SeqListDestroy(SL* psl)
{
	assert(psl);

	if (psl == NULL)
	{
		perror("malloc fail");
	}
	free(psl->a);
	psl->a = NULL;
	psl->capacity = psl->size = 0;
}

int SeqListFind(SL* psl,SLdatatype x)
{
	assert(psl);

	if (psl == NULL)
	{
		perror("malloc fail");
	}
	for (int i = 0; i < psl->size; i++)
	{
		if (psl->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void SeqListModify(SL* psl, SLdatatype x)
{
	assert(psl);

	if (psl == NULL)
	{
		perror("malloc fail");
	}
	for (int i = 0; i < psl->size; i++)
	{
		if (psl->a[i] == 4)
		{
			psl->a[i]=x;
			break;
		}
	}
}

