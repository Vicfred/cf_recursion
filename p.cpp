// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/P
#include <cstdint>
#include <iostream>

using namespace std;

int backtrack(int64_t n) {
  if(n <= 1) {
    return 0;
  }
  return 1 + backtrack(n >> 1);
}

int main() {
  int64_t N;
  cin >> N;
  cout << backtrack(N) << endl;
  return 0;
}
