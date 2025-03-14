#include "Insert.h"
InsertSort::InsertSort() = default;
InsertSort::InsertSort(vector<int> &input) : BaseSort(input) {}

InsertSort::~InsertSort() {};
void InsertSort::Sort()
{
  int n = arr.size();
  for (int i = 1; i < n; i++)
  {
    int j = i;
    while (j > 0 && arr[j] < arr[j - 1])
    {
      swap(arr[j], arr[j - 1]);
      j--;
    }
  }
}
void InsertSort::Print() const
{
  cout << "InsertSort:" << endl;
  BaseSort::Print();
}