// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A
#include <iostream>

using namespace std;

void backtrack(int n, const int &N) {
  if (n == N) {
    return;
  }
  cout << "I love Recursion" << endl;
  backtrack(n + 1, N);
}

int main() {
  int N;
  cin >> N;
  backtrack(0, N);
  return 0;
}
