#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  string input, output = "";
  cin >> input;
  int n = input.length();

  for (int i = 0; i < n;) {
    if (input[i] == '.') {
      output += '0';
      i++;
    }
    if (input.substr(i, 2) == "-.") {
      output += '1';
      i += 2;
    }
    if (input.substr(i, 2) == "--") {
      output += '2';
      i += 2;
    }
  }
  cout << output << endl;

  return 0;
}
