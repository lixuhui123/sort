//void swap(int* a, int*b)
//{
//	int tmp;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int doublepointway1(int *src, int start, int end)
//{
//
//	int a = start;
//	int b = end;
//	int flag = 0;
//	while (src[b] > src[a])
//	{
//		b--;
//	}
//	while (a < b)
//	{
//		swap(src + b, src + a);
//		flag = !flag;
//
//		while (src[b] >= src[a])
//		{
//			flag ? a++ : b--;
//			/* tlag作为标记位，用来判断是让a指针寻找还是让b指针寻找*/
//		}
//
//	}
//
//	return flag ? b : a;
//
//}
//void dealquicksort(int *src, int start, int end)
//{
//	int mid;
//	if (start < end)
//	{
//		mid = doublepointway2(src, start, end);
//		dealquicksort(src, start, mid - 1);
//		dealquicksort(src, mid + 1, end);
//	}
//}
//void quicksort(int *src, int n)
//{
//	//快速排序
//	dealquicksort(src, 0, n - 1);
//}
