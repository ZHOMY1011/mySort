#ifndef MERGE_H
#define MERGE_H

#include "Base.h"
class MergeSort : public BaseSort
{

public:
  MergeSort();
  MergeSort(vector<int> &input);

  ~MergeSort();

  void Sort() override;
  void Print() const override;

private:
  void Merge(int left,int mid,int right);
  void MergeRecursion(int left,int right);
};

#endif