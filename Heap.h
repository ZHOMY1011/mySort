#ifndef HEAP_H
#define HEAP_H
#include "Base.h"
class HeapSort : public BaseSort
{

public:
  // 引入构造函数
  HeapSort();
  HeapSort(vector<int> &input);
  ~HeapSort();
  // 虚函数重载
  void Sort() override;
  void Print() const override;

private:
  // 调整堆，使其满足大根堆的性质
  void heapify(int n, int i); // n代表操作的数组长度 i代表目前的根节点
};
#endif