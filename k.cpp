// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K
#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

int64_t maxima(const vector<int64_t> &A) {
  if(A.size() == 0) {
    return INT64_MIN;
  }
  const vector<int64_t> B(A.begin() + 1, A.end());
  return max(A[0], maxima(B));
}

int main() {
  int64_t N;
  cin >> N;
  vector<int64_t> A(N);
  for(int i = 0; i < N; ++i) {
    cin >> A[i];
  }
  cout << maxima(A) << endl;
}
