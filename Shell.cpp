#include "Shell.h"

ShellSort::ShellSort() = default;
ShellSort::ShellSort(vector<int> &input) : BaseSort(input) {}

ShellSort::~ShellSort() {}

void ShellSort::Sort()
{
  int n = arr.size();
  for (int gap = n / 2; gap > 0; gap /= 2)
  {
    for (int i = gap; i < n; i++) // 从后半开始
    {
      int temp = arr[i];
      int j;
      // 这部分的代码逻辑比较复杂,在每次的for循环后,都一定会出现一个递增的序列,因此在后续的排序中,只需要一次向前查看一个位置,如果前者已经小于当前元素,则停止遍历
      for (j = i; j > 0 && arr[j - gap] > temp; j -= gap)
      {
        arr[j] = arr[j - gap];
      }
      arr[j] = temp;
    }
  }
}
void ShellSort::Print() const
{
  cout << "ShellSort:" << endl;
  BaseSort::Print();
}