#include <bits/stdc++.h>
#include <cstdint>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  string input;
  cin >> input;

  bool apply = true;
  for (uint_fast32_t i = 1; i < input.size(); i++) {
    if (islower(input[i])) {
      apply = false;
      break;
    }
  }

  if (apply) {
    for (char& c : input) {
      if (islower(c)) {
        c = toupper(c);
      } else {
        c = tolower(c);
      }
    }
  }
  cout << input << endl;
  return 0;
}
