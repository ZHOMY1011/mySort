#ifndef SHELL_H
#define SHELL_H

#include "Base.h"

class ShellSort :public BaseSort
{
  public:
    ShellSort();
    ShellSort(vector<int> &input);

    ~ShellSort();

    void Sort() override;
    void Print() const override;
};

#endif