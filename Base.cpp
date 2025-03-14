#include "Base.h"

BaseSort::BaseSort() = default;
BaseSort::BaseSort(vector<int> &input) : arr(input) {}
BaseSort::~BaseSort() {}
void BaseSort::Print() const
{
  for (auto i : arr)
  {
    cout << i << " ";
  }
  cout << endl;
}
