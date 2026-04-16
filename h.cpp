// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/H
#include <iostream>

using namespace std;

void backtrack(int level, const int N) {
  if (level == N) {
    return;
  }
  backtrack(level + 1, N);
  for(int i = 0; i < N - level - 1; ++i) {
    cout << ' ';
  }
  for(int i = 0; i < 2*level + 1; ++i) {
    cout << '*';
  }
  for(int i = 0; i < N - level - 1; ++i) {
    cout << ' ';
  }
  cout << endl;
}

int main() {
  int N;
  cin >> N;
  backtrack(0, N);
  return 0;
}
