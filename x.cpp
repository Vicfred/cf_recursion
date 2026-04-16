// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/X
#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

int64_t backtrack(int64_t r, int64_t c, const vector<vector<int64_t>> &A) {
  int64_t n = A.size();
  int64_t m = A[0].size();
  if (r == n) {
    return INT64_MIN;
  }
  if (c == m) {
    return INT64_MIN;
  }
  if(r == n - 1 and c == m - 1) {
    return A[r][c];
  }
  return max(A[r][c] + backtrack(r + 1, c, A),
             A[r][c] + backtrack(r, c + 1, A));
}

int main() {
  int64_t N, M;
  cin >> N >> M;
  vector<vector<int64_t>> A(N, vector<int64_t>(M));
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < M; ++j) {
      cin >> A[i][j];
    }
  }
  cout << backtrack(0, 0, A) << endl;
  return 0;
}
