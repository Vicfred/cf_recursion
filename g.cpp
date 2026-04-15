// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/G
#include <cstdint>
#include <iostream>

using namespace std;

void backtrack(int64_t level, const int64_t N) {
  if (level == N) {
    return;
  }
  for (int i = 0; i < N - (level + 1); ++i) {
    cout << ' ';
  }
  for (int i = 0; i < 2 * level + 1; ++i) {
    cout << '*';
  }
  for (int i = 0; i < N - (level + 1); ++i) {
    cout << ' ';
  }
  cout << endl;
  backtrack(level + 1, N);
}

int main() {
  int64_t N;
  cin >> N;
  backtrack(0, N);
  return 0;
}
