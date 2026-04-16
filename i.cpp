// Vicfred
#include <iostream>
#include <string>

using namespace std;

int backtrack(const string& s) {
  if(s == "") {
    return 0;
  }
  int vowels = 0;
  char c = s[0];
  if(c == 'a' or c == 'i' or
     c == 'u' or c == 'e' or
     c == 'o' or c == 'A' or
     c == 'I' or c == 'U' or
     c == 'E' or c == 'O') {
    vowels += 1;
  }
  return vowels + backtrack(s.substr(1));
}

int main() {
  string s;
  getline(cin, s);
  cout << backtrack(s) << endl;
  return 0;
}
