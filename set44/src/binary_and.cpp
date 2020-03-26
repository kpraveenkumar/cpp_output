#include <iostream>
using namespace std;

int main() {
  for (auto index{0}; index < 10; ++index) {
    auto result = index & (index << 1);
    if (result) {
      cout << index << " ";
    }
  }
}