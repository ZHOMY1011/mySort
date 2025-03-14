#include "Merge.h"

MergeSort::MergeSort() = default;
MergeSort::MergeSort(vector<int> &input) : BaseSort(input) {}

MergeSort::~MergeSort() {}

void MergeSort::Sort()
{
  int left = 0;
  int right = arr.size() - 1;
  MergeRecursion(left,right);
}
void MergeSort::Print() const
{
  cout << "MergeSort:" << endl;
  BaseSort::Print();
}

// 合并两个有序数组
void MergeSort::Merge(int left, int mid, int right)
{
  int n1 = mid - left + 1; // 左子数组大小
  int n2 = right - mid;    // 右子数组大小

  // 创建临时数组
  vector<int> leftArr(n1), rightArr(n2);

  // 复制数据到临时数组
  for (int i = 0; i < n1; i++)
    leftArr[i] = arr[left + i];
  for (int i = 0; i < n2; i++)
    rightArr[i] = arr[mid + 1 + i];

  // 合并两个子数组
  int i = 0, j = 0, k = left;
  while (i < n1 && j < n2)
  {
    if (leftArr[i] <= rightArr[j])
      arr[k++] = leftArr[i++];
    else
      arr[k++] = rightArr[j++];
  }

  // 复制剩余元素
  while (i < n1)
    arr[k++] = leftArr[i++];
  while (j < n2)
    arr[k++] = rightArr[j++];
}

// 递归排序
void MergeSort::MergeRecursion(int left, int right)
{
  if (left >= right)
    return; // 递归终止条件

  int mid = left + (right - left) / 2; // 计算中间索引

  MergeRecursion(left, mid);      // 递归排序左半部分
  MergeRecursion(mid + 1, right); // 递归排序右半部分
  Merge(left, mid, right);   // 合并排序好的部分
}