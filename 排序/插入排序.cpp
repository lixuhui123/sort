//void  sort(int* src, int n)
//{
//	int i, j;
//	int tmp;
//	for (i = 0; i < n; ++i)
//	{
//		tmp = src[i];
//		for (j = i; j > 0 && src[j - 1] > tmp; --j)
//		{
//			/*��������ĺ���˼����������֣�������Ҫ����ĵ�iλҲ����tmpֵ
//			���ǰ���б�����������Ǿͽ���Щ������һ������tmpӦ���ڵĵط��ڳ���
//			��ǰ�ȣ�������*/
//			src[j] = src[j - 1];
//		}
//		src[j] = tmp;
//		/* ����ٽ�tmp���ȥ*/
//	}
//}

#include<stdio.h>
#include<stdlib.h>
void Sort(int arr[], int n)
{
	int i, j,tmp;
	for (i = 0; i < n; ++i)
	{
		tmp = arr[i];
		for (j = i; j > 0 && arr[j - 1] > tmp; --j)
		{
			arr[j] = arr[j - 1];
		}
		arr[j] = tmp;
	}
}



//��������, ȥ��tmp��λ��
void sort(int arr[], int n)
{
	//ð������
	int i, j, tmp;
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n - 1 - i; ++j)
		{
			if (arr[j+1] > arr[j])
			{
				tmp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

int main()
{
	int arr[6] = { 98,0,7,2,51,8 };
	sort(arr, 6);
	for (int i = 0; i < 6; ++i)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}
