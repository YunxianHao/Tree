#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;
void Swap(HPDataType* p1, HPDataType* p2);
void HeapPrint(HP* php);
void HeapInit(HP* php);
void HeapDestroy(HP* php);
void AdjustUp(HPDataType* a, int child);
void HeapPush(HP* php,HPDataType x);
void AdjustDown(HPDataType* a, int size,int parent);
void HeapPop(HP* php);
HPDataType HeapTop(HP* php);
bool HeapEmpty(HP* php);
int HeapSize(HP* php);
