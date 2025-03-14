#ifndef QUICK_H
#define QUICK_H
#include "Base.h"
class QuickSort : public BaseSort
{

public:
  QuickSort();
  QuickSort(vector<int> &input);
  ~QuickSort();

  void Sort() override;
  void Print() const override;
private:
  void quick(int left, int right);
};

#endif