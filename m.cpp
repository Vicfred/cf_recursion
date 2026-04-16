// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/M
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

int64_t backtrack(int64_t cur, int64_t M, const vector<int64_t> &A) {
  if(cur == A.size()) {
    return 0;
  }
  if(A.size() - cur > M) {
    return backtrack(cur + 1, M, A);
  } else {
    return A[cur] + backtrack(cur + 1, M, A);
  }
}

/*
 int64_t sumLastM(const vector<int64_t>& a, int64_t i, int64_t m) {
  if (m == 0) {
    return 0;
  }
  return a[i] + sumLastM(a, i - 1, m - 1);
}
*/

int main() {
  int64_t N, M;
  cin >> N >> M;
  vector<int64_t> A(N);
  for(int i = 0; i < N; ++i) {
    cin >> A[i];
  }
  cout << backtrack(0, M, A) << endl;
  return 0;
}
