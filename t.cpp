// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/T
#include <cstdint>
#include <iostream>

using namespace std;

int64_t combinations(int64_t N, int64_t R) {
  if(R == 0 or N == R) {
    return 1;
  }
  return combinations(N - 1, R - 1) + combinations(N - 1, R);
}

int main() {
  int64_t N, R;
  cin >> N >> R;
  cout << combinations(N, R) << endl;
  return 0;
}
