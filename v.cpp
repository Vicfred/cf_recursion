// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/V
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

bool backtrack(int64_t idx, int64_t X, const vector<int64_t> &A) {
  if(idx == A.size()) {
    if(X == 0) {
      return true;
    }
    return false;
  }
  bool plus = backtrack(idx + 1, X - A[idx], A);
  bool minus = backtrack(idx + 1, X + A[idx], A);
  return (plus or minus);
}

int main() {
  int64_t N, X;
  cin >> N >> X;
  vector<int64_t> A(N);
  for(int i = 0; i < N; ++i) {
    cin >> A[i];
  }
  if(backtrack(1, X - A[0], A)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
