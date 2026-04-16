// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/N
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

void backtrack(int64_t row, int64_t col, const vector<vector<int64_t>> &A,
               const vector<vector<int64_t>> &B) {
  int64_t R, C;
  R = A.size();
  C = A[0].size();
  if (row == R) {
    return;
  }
  if (col == C) {
    cout << endl;
    backtrack(row + 1, 0, A, B);
    return;
  }
  if (col > 0) {
    cout << " ";
  }
  cout << A[row][col] + B[row][col];
  backtrack(row, col + 1, A, B);
}

int main() {
  int64_t R, C;
  cin >> R >> C;
  vector<vector<int64_t>> A(R, vector<int64_t>(C));
  vector<vector<int64_t>> B(R, vector<int64_t>(C));
  for (int i = 0; i < R; ++i) {
    for (int j = 0; j < C; ++j) {
      cin >> A[i][j];
    }
  }
  for (int i = 0; i < R; ++i) {
    for (int j = 0; j < C; ++j) {
      cin >> B[i][j];
    }
  }
  backtrack(0, 0, A, B);
}
