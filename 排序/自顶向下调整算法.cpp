//
///*返回以index为根的完全二叉树的左子树的索引，整个二叉树索引以0为开始*/
//int left(int index) 
//{
//	return ((index << 1) + 1);
//}
///*返回以index为根的完全二叉树的右子树的索引，整个二叉树索引以0为开始*/
//int right(int index) 
//{
//	return ((index << 1) + 2);
//}
///*两个数的交换*/
//void swap(int* a, int* b) 
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//	return;
//}
//void max_heap_adjust(int array[], int index)
//{	//index是位置
//	int left_index = left(index);
//	int right_index = right(index);
//	int largest = index;
//	//左子树和父节点进行对比
//	if (left_index <= (heap_size - 1) && array[left_index] > array[largest]) {
//		largest = left_index;
//	}
//	//右子树和父节点进行对比
//	if (right_index <= (heap_size - 1) && array[right_index] > array[largest]) {
//		largest = right_index;
//	}
//	if (largest == index) {
//		/*判断是否要进行递归调用，每交换一次最小二叉树的时候，可能会破坏前面已经调整好的堆
//		的结构，所以交换一次需要从当前父亲节点开始重新进行自顶向下算法，重新调整堆*/
//		/*这里的递归退出条件是 经过上面的计算最大值仍然是堆顶，即调整不能调整为止
//		*/
//		return;
//	}
//	else {
//		//需要交换
//		swap(&array[index], &array[largest]);
//		//递归调用
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
//	//恢复堆的大小
//	heap_size = old_heap_size;
//}
//
