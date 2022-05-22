// 升序排序 -- 建大堆
// 降序排序 -- 建小堆
void HeapSort(int* a, int n)
{
	//// 建堆方式1：O(N*logN)
	//for (int i = 1; i < n; ++i)
	//{
	//	AdjustUp(a, i);
	//}

	// 建堆方式2：O(N)
	for (int i = (n-1-1)/2; i >= 0; --i)
	{
		AdjustDwon(a, n, i);
	}

	// O(N*logN)
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDwon(a, end, 0);
		--end;
	}
}

void TestHeapSort()
{
	// 升序打印 -- 小堆
	// 降序打印 -- 大堆
	/*HP hp;
	HeapInit(&hp);
	int a[] = { 27, 15, 19, 18, 28, 34, 65, 49, 25, 37 };
	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
	{
	HeapPush(&hp, a[i]);
	}

	while (!HeapEmpty(&hp))
	{
	printf("%d ", HeapTop(&hp));
	HeapPop(&hp);
	}
	printf("\n");*/

	int a[] = { 27, 15, 19, 18, 28, 34, 65, 49, 25, 37 };
	HeapSort(a, sizeof(a) / sizeof(int));
}

int main()
{
	//TestHeap();
	TestHeapSort();

	return 0;
}
