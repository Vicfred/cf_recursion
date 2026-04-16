// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

int64_t backtrack(const vector<int64_t> &A) {
  if(A.size() == 0) {
    return 0;
  }
  const vector<int64_t> B(A.begin() + 1, A.end());
  return A[0] + backtrack(B);
}

int main() {
  int64_t N;
  cin >> N;
  vector<int64_t> A(N);
  for(int i = 0; i < N; ++i) {
    cin >> A[i];
  }
  cout << backtrack(A) << endl;
  return 0;
}
