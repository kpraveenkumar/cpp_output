#include <iostream>
using namespace std;

int main() {
  auto x{0};
  x = printf("HelloWorld");
  cout << x << endl;
  // Length of HelloWorld is 10;
  printf("%d", x);
  return 0;
}