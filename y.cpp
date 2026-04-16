// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Y
#include <cstdint>
#include <iostream>

using namespace std;

int64_t backtrack(int64_t cur, int64_t end) {
  if (cur > end) {
    return 0;
  }
  if (cur == end) {
    return 1;
  }
  return backtrack(cur + 1, end) + backtrack(cur + 2, end) +
         backtrack(cur + 3, end);
}

int main() {
  int64_t S, E;
  cin >> S >> E;
  cout << backtrack(S, E) << endl;
  return 0;
}
