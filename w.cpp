// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W
#include <cstdint>
#include <iostream>

using namespace std;

bool backtrack(int64_t n, int64_t N) {
  if(n > N) {
    return false;
  }
  if(n == N) {
    return true;
  }
  return backtrack(n * 10, N) || backtrack(n * 20, N);
}

int main() {
  int64_t T;
  cin >> T;
  int64_t N;
  while(T--) {
    cin >> N;
    if(backtrack(1, N)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
