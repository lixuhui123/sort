//
///*������indexΪ������ȫ��������������������������������������0Ϊ��ʼ*/
//int left(int index) 
//{
//	return ((index << 1) + 1);
//}
///*������indexΪ������ȫ��������������������������������������0Ϊ��ʼ*/
//int right(int index) 
//{
//	return ((index << 1) + 2);
//}
///*�������Ľ���*/
//void swap(int* a, int* b) 
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//	return;
//}
//void max_heap_adjust(int array[], int index)
//{	//index��λ��
//	int left_index = left(index);
//	int right_index = right(index);
//	int largest = index;
//	//�������͸��ڵ���жԱ�
//	if (left_index <= (heap_size - 1) && array[left_index] > array[largest]) {
//		largest = left_index;
//	}
//	//�������͸��ڵ���жԱ�
//	if (right_index <= (heap_size - 1) && array[right_index] > array[largest]) {
//		largest = right_index;
//	}
//	if (largest == index) {
//		/*�ж��Ƿ�Ҫ���еݹ���ã�ÿ����һ����С��������ʱ�򣬿��ܻ��ƻ�ǰ���Ѿ������õĶ�
//		�Ľṹ�����Խ���һ����Ҫ�ӵ�ǰ���׽ڵ㿪ʼ���½����Զ������㷨�����µ�����*/
//		/*����ĵݹ��˳������� ��������ļ������ֵ��Ȼ�ǶѶ������������ܵ���Ϊֹ
//		*/
//		return;
//	}
//	else {
//		//��Ҫ����
//		swap(&array[index], &array[largest]);
//		//�ݹ����
//		max_heap_adjust(array, largest);
//	}
//}
//
//void heap_sort(int array[], int length) {
//	int old_heap_size = heap_size;
//	int i;
//	for (i = length - 1; i >= 1; --i) {
//		swap(&array[i], &array[0]);
//		--heap_size;
//		max_heap_adjust(array, 0);
//	}
//	//�ָ��ѵĴ�С
//	heap_size = old_heap_size;
//}
//
