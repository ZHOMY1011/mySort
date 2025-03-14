#include "Bubble.h"
BubbleSort::BubbleSort() = default;
BubbleSort::BubbleSort(vector<int> &input) : BaseSort(input) {}

BubbleSort::~BubbleSort() {};
void BubbleSort::Sort()
{
  int n = arr.size();
  for (int i = 0; i < n - 1; i++)
  {

    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}
void BubbleSort::Print() const
{
  cout << "BubbleSort:" << endl;
  BaseSort::Print();
}