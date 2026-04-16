// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

bool backtrack(const vector<int64_t> &A) {
  if(A.size() <= 1) {
    return 1;
  }
  if(A[0] == A[A.size() - 1]) {
    if(A.size() == 2) {
      return true;
    }
    const vector<int64_t> B(A.begin() + 1, A.end() - 1);
    return backtrack(B);
  }
  return false;
}

/*
bool backtrack(const vector<int64_t> &A, int64_t l, int64_t r) {
  if (l >= r) {
    return true;
  }
  if (A[l] != A[r]) {
    return false;
  }
  return backtrack(A, l + 1, r - 1);
}
*/

int main() {
  int64_t N;
  cin >> N;
  vector<int64_t> A(N);
  for(int64_t i = 0; i < N; ++i) {
    cin >> A[i];
  }
  if(backtrack(A)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
