#include <iostream>
using namespace std;

class A {
  void f();
  void g();
  int x;
};
class B {
  int f();
  void g();
  int x;
};
class C {
public:
  int f() {
    int *x = new int[1000];
    return 0;
  }
  void g() { cout << "Hallo"; }

private:
  int x;
};
int main() {
  cout << "Size of class:" << sizeof(A) << endl;
  cout << "Size of class:" << sizeof(B) << endl;
  cout << "Size of class:" << sizeof(C) << endl;
  C c;
  cout << "Size of object:" << sizeof(c) << endl;
  cout << "Size of function with return int :" << sizeof(c.f()) << endl;
  // cout << "Size of function with return void:" << sizeof(c.g()) << endl; //
  // Compilation issue with sizeof(void)
  return 0;
}