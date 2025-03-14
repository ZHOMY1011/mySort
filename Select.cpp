#include "Select.h"

SelectSort::SelectSort() = default;
SelectSort::SelectSort(vector<int> &input) : BaseSort(input) {}

SelectSort::~SelectSort() {}

void SelectSort::Sort()
{
  int n = arr.size();

  for (int i = 0; i < n - 1; i++)
  {
    int currentMax = arr[0];
    int maxIndex = 0;
    for (int j = 0; j < n - i; j++)
    {
      if (arr[j] > currentMax)
      {
        currentMax = arr[j];
        maxIndex = j;
      }
    }
    swap(arr[maxIndex], arr[n - i - 1]);
  }
}
void SelectSort::Print() const
{
  cout << "SelectSort:" << endl;
  BaseSort::Print();
}
