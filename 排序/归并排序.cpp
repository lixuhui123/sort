//#include<stdio.h>
//#include<stdlib.h>
//
//void dealMergeSort(int *src, int* tmp, int  str, int  end)
//{
//	if (str >= end)
//	{
//		return;
//	}
//	
//	int mid = (str + end) / 2;
//	dealMergeSort(src, tmp, str, mid);
//	dealMergeSort(src, tmp, mid + 1, end);
//
//	int a = str;
//	int b = mid + 1;
//	int c = str;//1,5,6,15,8,26,5,55,9,0 
//	while (a <= mid && b <= end)
//	{
//
//		if (src[a] < src[b])
//		{
//			tmp[c] = src[a];
//			a++;
//		}
//		else
//		{
//			tmp[c] = src[b];
//			b++;
//		}
//		c++;
//	�������Ѿ��ȽϺõ����ݴ�����ʱ�Ŀռ�����
//	}
//	for (; a <= mid; a++, c++)
//	{
//		tmp[c] = src[a];
//	}
//	for (; b <= end; b++, c++)
//	{
//		tmp[c] = src[b];
//	}
//	��ʣ������ݴ浽��ʱ��������
//	int i = 0;
//	for (i = 0; i <= end; ++i)
//	{
//		src[i] = tmp[i];
//	}
//	����ʱ����Ԫ�ش��뵽ԭ���鵱��
//}
//void MergeSort(int *src, int n)
//{
//	int *tmp = (int*)malloc(n * sizeof(int));
//	dealMergeSort(src, tmp, 0, n - 1);//�����±�
//	free(tmp);
//}	
//int main()
//{
//	int arr[10] = { 1,5,6,15,8,26,5,55,9,0 };
//	MergeSort(arr, 10);
//	for (int i=0;i<10;++i)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//	system("pause");
//	return 0;
//}