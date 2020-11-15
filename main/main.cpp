#include <iostream>
#include "TList.h"

int main()
{
  TList<int> temp;
  temp.InsFirst(10);
  temp.InsFirst(20);
  temp.InsFirst(30);
  cout << temp;

  return 0;
}
