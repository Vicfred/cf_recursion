// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Z
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

int64_t backtrack(int64_t idx, const vector<int64_t> &A) {
  if(idx == 0) {
    cout << A[0] << " ";
    return A[0];
  }
  int64_t maxima = max(A[idx] ,backtrack(idx - 1, A));
  cout << maxima << " ";
  return maxima;
}

int main() {
  int64_t N;
  cin >> N;
  vector<int64_t> A(N);
  for(int i = 0; i < N; ++i) {
    cin >> A[i];
  }
  backtrack(N - 1, A);
  cout << endl;
  return 0;
}
