#ifndef BASE_H
#define BASE_H
using namespace std;
#include <iostream>
#include <vector>
class BaseSort
{
protected:
  vector<int> arr;

public:
  BaseSort();
  BaseSort(vector<int> &input);
  virtual ~BaseSort();
  virtual void Sort() = 0;
  virtual void Print() const;
};
#endif