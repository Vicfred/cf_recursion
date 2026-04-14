// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B
#include <iostream>

using namespace std;

void backtrack(int n) {
  if(n == 1) {
    cout << n << endl;
    return;
  }
  cout << n << " ";
  backtrack(n - 1);
}

int main() {
  int N;
  cin >> N;
  backtrack(N);
  return 0;
}
