// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J
#include <cstdint>
#include <iostream>

using namespace std;

int64_t factorial(int64_t n) {
  if(n == 0) {
    return 1;
  }
  return n * factorial(n - 1);
}

int main() {
  int64_t N;
  cin >> N;
  cout << factorial(N) << endl;
  return 0;
}
