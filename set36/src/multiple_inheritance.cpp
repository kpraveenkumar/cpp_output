#include <iostream>
using namespace std;

struct A {
  int count_;
};

struct B {
  int *value_;
};

struct C : public A, B {};
int main() {
  C c;
  c.value_ = 0;
  cout << "Multiple inheritance";
  return 0;
}