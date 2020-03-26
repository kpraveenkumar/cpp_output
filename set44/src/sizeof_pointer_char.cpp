#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  // auto a="Hello World"; // Compilation issue as auto is char*
  char a[] = "Hello World";
  char *ptr = a;

  cout << a << endl;
  cout << sizeof(ptr) << endl;
  cout << sizeof(a) << endl;
  cout << strlen(a) << endl;

  char b[] = "gyueruygegjhfehjfgvyuydfygfyggfhg iyetydfyeggehjgd";
  char *another_ptr = b;

  cout << b << endl;
  cout << sizeof(another_ptr) << endl;
  cout << sizeof(b) << endl;
  cout << strlen(b) << endl;

  return 0;
}