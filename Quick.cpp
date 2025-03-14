#include "Quick.h"
QuickSort::QuickSort() = default;
QuickSort::QuickSort(vector<int> &input) : BaseSort(input) {}

QuickSort::~QuickSort() {}

void QuickSort::Sort()
{
  quick(0, arr.size() - 1);
}
void QuickSort::Print() const
{
  cout << "QuickSort:" << endl;
  BaseSort::Print();
}

void QuickSort::quick(int left, int right)
{
  int i = left;
  int j = right;
  int pivot = arr[left + (right - left) / 2];
  while (i <= j)
  {
    while (arr[i] < pivot) // 找到左侧第一个需要交换的大于pivot的值
    {
      i++;
    }
    while (arr[j] > pivot) // 找到右侧第一个小于
    {
      j--;
    }
    if (i <= j)
    {
      swap(arr[i], arr[j]);
      i++;
      j--;
    }
  }
  if (left < j)
  {
    quick(left, j);
  }
  if(right>i)
  {
    quick(i, right);
  }
}