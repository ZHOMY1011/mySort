#ifndef INSERT_H
#define INSERT_H

#include "Base.h"
class InsertSort : public BaseSort
{

public:
  // 引入构造函数
  InsertSort();
  InsertSort(vector<int> &input);

  ~InsertSort();

  void Sort() override;
  void Print() const override;
};

#endif