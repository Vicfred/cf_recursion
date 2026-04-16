// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/O
#include <cstdint>
#include <iostream>

using namespace std;

int64_t fibonacci(int64_t n) {
  if(n == 1) {
    return 0;
  }
  if(n == 2) {
    return 1;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  int64_t N;
  cin >> N;
  cout << fibonacci(N) << endl;
  return 0;
}
