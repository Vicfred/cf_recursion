// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B
#include <iostream>

using namespace std;

void backtrack(int n, const int& N) {
  if(n == N) {
    cout << n << endl;
    return;
  }
  cout << n << endl;
  backtrack(n + 1, N);
}

int main() {
  int N;
  cin >> N;
  backtrack(1, N);
  return 0;
}
