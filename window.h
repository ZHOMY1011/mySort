#ifndef WINDOW_H
#define WINDOW_H
#include <iostream>
#include <string>
#include "Base.h"
#include "Insert.h"
#include "Heap.h"
#include "Bubble.h"
#include "Select.h"
#include "Quick.h"
#include "Shell.h"
#include "Radix.h"
#include "Merge.h"
class Window
{
public:
  Window();
  ~Window();

  void show();
  void getNums(vector<int> &input);

private:
  vector<int> nums;
};

#endif