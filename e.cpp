// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/E
#include <cstdint>
#include <iostream>

using namespace std;

void backtrack(int64_t n) {
  if(n >> 1 == 0) {
    cout << n % 2;
    return;
  }
  backtrack(n >> 1);
  cout << n % 2;
}

int main() {
  int64_t T;
  cin >> T;
  int64_t N;
  while(T--) {
    cin >> N;
    backtrack(N);
    cout << endl;
  }
  return 0;
}
