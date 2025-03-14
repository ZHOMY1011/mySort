#ifndef RADIX_H
#define RADIX_H
#include "Base.h"
class RadixSort : public BaseSort
{

public:
  RadixSort();
  RadixSort(vector<int> &input);

  ~RadixSort();

  void Sort() override;
  void Print() const override;

private:
  int getMax();
  void countingSort(int exp);
};

#endif