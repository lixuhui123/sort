//int hoareway(int* src, int start, int end)
//{
//	int a = start + 1, b = end - 2;
//	int mid = (start + end) / 2;
//	if (src[start] > src[mid])
//	{
//		swap(src + start, src + mid);
//	}
//	if (src[mid] > src[end])
//	{
//		swap(src + mid, src + end);
//	}
//	if (src[start] > src[mid])
//	{
//		swap(src + start, src + mid);
//		/*上面是三数排序部分*/
//	}
//	if (end - mid <= 2)
//	{
//		return mid;
//		/*如果小于4个数直接返回输出*/
//	}
//	/*保护基准值*/
//	swap(src + mid, src + end - 1);
//	while (a <= b)
//	{
//		while (a < end - 1 && src[a] <= src[end - 1])
//		{
//
//			a++;
//		}
//		while (b > 0 && src[b] >= src[end - 1])
//		{
//			b--;
//
//		}
//		if (a == b && (a == 1 || a == end - 1))
//		{
//			break;
//			/*一种是找到同一个值，一种是找到了已经三数排好的地方，此时就不用排*/
//		}
//		if (a < b)
//		{
//			swap(src + a, src + b);
//			/* 交换*/
//		}
//
//	}
//	swap(src + a, src + end - 1);
//	return a;
//}
//
//void dealquicksort(int *src, int start, int end)
//{
//	int mid;
//	if (start < end)
//	{
//		mid = hoareway(src, start, end);
//		dealquicksort(src, start, mid - 1);
//		dealquicksort(src, mid + 1, end);
//	}
//}
//void quicksort(int *src, int n)
//{
//	//快速排序
//	dealquicksort(src, 0, n - 1);
//}
