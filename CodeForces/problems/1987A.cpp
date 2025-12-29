#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);

void solve() {
  string input;
  cin >> input;

  vector<char> letters = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
  for (int i = 1; i <= 8; i++) {
    if (i != input[1] - '0')
      cout << input[0] << i << endl;
  }

  for (int i = 0; i < 8; i++) {
    if (letters[i] != input[0]) {
      cout << letters[i] << input[1] << endl;
    }
  }
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
}
