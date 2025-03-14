#ifndef SELECT_H
#define SELECT_H

#include "Base.h"
class SelectSort :public BaseSort
{
public:
  SelectSort();
  SelectSort(vector<int> &input);

  ~SelectSort();

  void Sort() override;
  void Print() const override;
};
#endif