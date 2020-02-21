#include<stdio.h>
#include<stdlib.h>
void shellSort(int arr[], int length)
{

	int temp = 0;
	int count = 0;
	// 根据前面的逐步分析，使用循环处理
	for (int gap = length / 2; gap > 0; gap /= 2)//步长
	{
		for (int i = gap; i < length; i++)//一对一对往后走
		{
			// 遍历各组中所有的元素(共gap组，每组有个元素), 步长gap
			for (int j = i - gap; j >= 0; j -= gap)//一组的前面一个，
			{
				// 如果当前元素大于加上步长后的那个元素，说明交换
				if (arr[j] > arr[j + gap])
				{
					temp = arr[j];
					arr[j] = arr[j + gap];
					arr[j + gap] = temp;
				}
			}
		}
	}
}
void sort(int arr[], int length)
{
	int step,i,j,tmp;
	for (step=length/2 ; step>0 ; step/=2)
	{
		for (i=step;i<length;++i)
		{
			for (j=i-step;j>=0;j-=step)
			{
				if (arr[j] > arr[j+step])
				{
					tmp = arr[j];
					arr[j] = arr[j + step];
					arr[j + step] = tmp;

				}

			}
		}
	}

}

int main()
{
	int arr[6] = { 5,0,1,6,10,2 };
	sort(arr, 6);
	for (int i=0;i<6;++i)
	{
		printf("%d ", arr[i]);
	}
    system("pause");
    return 0;
} 