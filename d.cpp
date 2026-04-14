// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D
#include <cstdint>
#include <iostream>
#include <string>

using namespace std;

void backtrack(string n) {
  if(n == "") {
    cout << endl;
    return;
  }
  cout << n[0] << " ";
  backtrack(n.substr(1));
}

using namespace std;

int main() {
  int64_t T;
  cin >> T;
  string N;
  while(T--) {
    cin >> N;
    backtrack(N);
  }
  return 0;
}
