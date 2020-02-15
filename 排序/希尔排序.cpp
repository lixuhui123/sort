//#include<stdio.h>
//#include<stdlib.h>
//void shellSort(int arr[], int length)
//{
//
//	int temp = 0;
//	int count = 0;
//	// 根据前面的逐步分析，使用循环处理
//	for (int gap = length / 2; gap > 0; gap /= 2)
//	{
//		for (int i = gap; i < length; i++)//一对一对往后走
//		{
//			// 遍历各组中所有的元素(共gap组，每组有个元素), 步长gap
//			for (int j = i - gap; j >= 0; j -= gap)//一组的前面一个，
//			{
//				// 如果当前元素大于加上步长后的那个元素，说明交换
//				if (arr[j] > arr[j + gap])
//				{
//					temp = arr[j];
//					arr[j] = arr[j + gap];
//					arr[j + gap] = temp;
//				}
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[6] = { 5,0,1,6,10,2 };
//	shellSort(arr, 6);
//	for (int i=0;i<6;++i)
//	{
//		printf("%d ", arr[i]);
//	}
//    system("pause");
//    return 0;
//} 