#ifndef BUBBLE_H
#define BUBBLE_H

#include "Base.h"
class BubbleSort : public BaseSort
{

public:

  BubbleSort();
  BubbleSort(vector<int> &input);

  ~BubbleSort();

  void Sort() override;
  void Print() const override;
};
#endif