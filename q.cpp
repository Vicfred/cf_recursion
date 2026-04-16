// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Q
#include <cstdint>
#include <iostream>

using namespace std;

int64_t collatz(int n) {
  if(n == 1) {
    return 0;
  }
  if(n % 2 == 1) {
    return 1 + collatz(3*n + 1);
  } else {
    return 1 + collatz(n >> 1);
  }
}

int main() {
  for(int i = 1; i <= 100; ++i) {
    cout << "collatz " << i << ": " << collatz(i) << endl;
  }
  return 0;
}
