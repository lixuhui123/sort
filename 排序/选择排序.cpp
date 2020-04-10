//#include<stdio.h>
//#include<stdlib.h>
//#include <algorithm>
//void SelectionSort(int arr[], int length)
//{
//	int i, j;
//	int _min, tmp,min_index;
//	for (i = 0; i < length-1; ++i)
//	{
//		_min = arr[i];
//		min_index = i;//这个必不可少
//		for (j = i + 1; j < length; ++j)
//		{
//			if (arr[j] < _min)
//			{
//				_min = arr[j];//找最小值和下标
//				min_index = j;
//			}
//		}
//		 
//		tmp = arr[min_index];
//		arr[min_index] = arr[i];
//		arr[i] = tmp;
//		 
//		
//	}
//}
//void Sort(int arr[], int n)
//{
//	int i, j;
//	int min, min_index, tmp;
//	for (i = 0; i < n - 1; ++i)
//	{
//		min = arr[i];
//		min_index = i;
//		for (j = i + 1; j < n; ++j)
//		{
//			if (arr[j] < min)
//			{
//				min = arr[j];
//				min_index = j;
//			}
//		}
//		tmp = arr[min_index];
//		arr[min_index] = arr[i];
//		arr[i] = tmp;
//	}
//}
//int main()
//{
//	int arr[11] = { 5,0,11,123,13,11,61,5,4,3,11};
//	Sort(arr, 11);
//	for (int i = 0; i <11; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//
// 
//
//
//
//
