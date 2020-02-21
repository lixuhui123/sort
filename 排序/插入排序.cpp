////void  sort(int* src, int n)
////{
////	int i, j;
////	int tmp;
////	for (i = 0; i < n; ++i)
////	{
////		tmp = src[i];
////		for (j = i; j > 0 && src[j - 1] > tmp; --j)
////		{
////			/*插入排序的核心思想是这个部分，含义是要排序的第i位也就是tmp值
////			如果前面有比他还大的数那就将这些数后移一个，给tmp应该在的地方腾出来
////			往前比，往后移*/
////			src[j] = src[j - 1];
////		}
////		src[j] = tmp;
////		/* 最后再将tmp插进去*/
////	}
////}
//
//#include<stdio.h>
//#include<stdlib.h>
//void sort(int arr[], int n)
//{
//	int i, j;
//	int tmp;
//	for (i = 0; i < n; ++i)
//	{
//		tmp = arr[i];
//		for (j = i; j > 0 && tmp < arr[j - 1]; --j)
//		{
//			arr[j] = arr[j - 1];
//		}
//		arr[j] = tmp;
//	}
//}
//int main()
//{
//	int arr[6] = { 98,0,7,2,51,8 };
//	sort(arr, 6);
//	 for (int i=0;i<6;++i)
//	 {
//		 printf("%d ", arr[i]);
//	 }
//    system("pause");
//    return 0;
//}
//
//
////插入排序,去给tmp找位置
//void sort(int arr[], int n)
//{
//	int i, j, tmp;
//	for (i=0;i<n;++i)
//	{
//		tmp = arr[i];
//		for (j=i;j>0 && tmp<arr[j-1];--j)
//		{
//			arr[j] = arr[j - 1];
//		}
//		arr[j] = tmp;
//	}
//}
//
//
