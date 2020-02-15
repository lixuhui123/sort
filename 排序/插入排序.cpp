//void  sort(int* src, int n)
//{
//	int i, j;
//	int tmp;
//	for (i = 0; i < n; ++i)
//	{
//		tmp = src[i];
//		for (j = i; j > 0 && src[j - 1] > tmp; --j)
//		{
//			/*插入排序的核心思想是这个部分，含义是要排序的第i位也就是tmp值
//			如果前面有比他还大的数那就将这些数后移一个，给tmp应该在的地方腾出来
//			*/
//			src[j] = src[j - 1];
//		}
//		src[j] = tmp;
//		/* 最后再将tmp插进去*/
//	}
//}