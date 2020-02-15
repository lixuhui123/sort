//#include<stdio.h>
//#include<stdlib.h>
//#include <algorithm>
//void SelectionSort(int arr[], int length)
//{
//	int _min = 0;
//	int tmp;
//	int index;
//	for (int i = 0; i < length; ++i)
//	{
//		_min = arr[i];
//		for (int j = i + 1; j < length; ++j)
//		{
//			if (arr[j] < _min)
//			{
//				_min = arr[j];
//				index = j;
//			}
//		}
//		tmp = arr[i];
//		arr[i] = arr[index];
//		arr[index] = tmp;
//	}
//}
//int main()
//{
//	int arr[6] = { 5,0,1,6,10,2 };
//	SelectionSort(arr, 6);
//	for (int i = 0; i < 6; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//    system("pause");
//    return 0;
//}