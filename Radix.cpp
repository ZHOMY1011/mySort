#include "Radix.h"
RadixSort::RadixSort() = default;
RadixSort::RadixSort(vector<int> &input) : BaseSort(input) {}

RadixSort::~RadixSort() {}

void RadixSort::Sort()
{
  int maxVal = getMax();
  for (int exp = 1; maxVal / exp > 0; exp *= 10)
  {
    countingSort(exp);
  }
}
void RadixSort::Print() const
{
  cout << "RadixSort:" << endl;
  BaseSort::Print();
}

int RadixSort::getMax()
{
  int n = arr.size();
  int maxNum = arr[0];
  for (int i = 1; i < n; i++)
  {
    if (arr[i] > maxNum)
    {
      maxNum = arr[i];
    }
  }
  return maxNum;
}
void RadixSort::countingSort(int exp)
{
  int n = arr.size();
  vector<int> output(n);
  vector<int> count(10, 0);

  // 统计每个位上数字的出现次数
  for (int i = 0; i < n; i++)
  {
    count[(arr[i] / exp) % 10]++;
  }

  // 计算累积次数，以便确定每个数字在输出数组中的位置
  for (int i = 1; i < 10; i++)
  {
    count[i] += count[i - 1];
  }

  // 构建输出数组
  for (int i = n - 1; i >= 0; i--)
  {
    output[count[(arr[i] / exp) % 10] - 1] = arr[i];
    count[(arr[i] / exp) % 10]--;
  }

  // 将输出数组复制回原数组
  for (int i = 0; i < n; i++)
  {
    arr[i] = output[i];
  }
}