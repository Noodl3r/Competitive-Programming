#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);

int main() {
  fastio;
  string input;
  cin >> input;
  int length = input.length();

  if (input[0] != '-') {
    cout << input << endl;
  } else if (input[length - 1] > input[length - 2]) {
    cout << std::stoi(input.substr(0, length - 1));
  } else {
    cout << std::stoi(input.substr(0, length - 2) + input[length - 1]);
  }
}
