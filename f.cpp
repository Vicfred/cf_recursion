// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F
#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

void backtrack(int idx, const vector<int64_t> &A) {
  if(idx >= A.size()) {
    return;
  }
  backtrack(idx + 2, A);
  cout << A[idx] << " ";
}

int main() {
  int N;
  cin >> N;
  vector<int64_t> A(N); 
  for(int i = 0; i < N; ++i) {
    cin >> A[i];
  }
  backtrack(0, A);
  cout << endl;
  return 0;
}
