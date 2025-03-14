#include "window.h"

Window::Window()
{
  nums = {1, 2, 3, 7, 9, 4, 5};
}
Window::~Window() {};

void Window::getNums(vector<int> &input)
{
  nums = input;
}
// Sort Mod(nums);
// Mod.Sort();
// Mod.Print();
void Window::show()
{
  InsertSort insertMod(nums);
  insertMod.Sort();
  insertMod.Print();

  HeapSort heapMod(nums);
  heapMod.Sort();
  heapMod.Print();

  BubbleSort bubbleMod(nums);
  bubbleMod.Sort();
  bubbleMod.Print();

  SelectSort selectMod(nums);
  selectMod.Sort();
  selectMod.Print();

  QuickSort quickMod(nums);
  quickMod.Sort();
  quickMod.Print();

  ShellSort shellMod(nums);
  shellMod.Sort();
  shellMod.Print();

  RadixSort radixMod(nums);
  radixMod.Sort();
  radixMod.Print();

  MergeSort mergeMod(nums);
  mergeMod.Sort();
  mergeMod.Print();
}