
#include "Heap.h"
void HeapSort::heapify(int n, int i) // n代表操作的数组长度 i代表目前的根节点
{
  int largest = i; // 用于记录最大的节点
  int left = 2 * i + 1;
  int right = 2 * i + 2;
  if (left < n && arr[left] > arr[largest])
  {
    largest = left;
  }
  if (right < n && arr[right] > arr[largest])
  {
    largest = right;
  }
  if (largest != i)
  {
    swap(arr[i], arr[largest]); // 交换后子树的顺序会被打乱
    heapify(n, largest);
  }
}
HeapSort::HeapSort() = default;
HeapSort::HeapSort(vector<int> &input) : BaseSort(input) {}

HeapSort::~HeapSort() {}

void HeapSort::Sort()
{
  int n = arr.size();
  // 以n-1为根节点进行大根堆初始化
  for (int i = n / 2 - 1; i >= 0; i--)
  {
    heapify(n, i);
  }
  for (int i = n - 1; i > 0; i--)
  {
    // 将最大元素放到尾部
    swap(arr[0], arr[i]);

    // 对堆进行重排
    heapify(i, 0);
  }
}
void HeapSort::Print() const
{
  cout << "HeaptSort:" << endl;
  BaseSort::Print();
}
