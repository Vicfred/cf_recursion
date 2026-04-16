// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/S
#include <cstddef>
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

long double average(const vector<int64_t> &A, size_t n) {
  if (n == 1) {
    return A[0];
  }
  // recursive formula for average
  return (A[n - 1] + (n - 1) * average(A, n - 1)) / (long double)n;
}

int main() {
  int64_t N;
  cin >> N;
  vector<int64_t> A(N);
  for(int i = 0; i < N; ++i) {
    cin >> A[i];
  }
  cout << average(A, A.size()) << endl;
  return 0;
}
