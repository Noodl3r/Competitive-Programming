#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  string input;
  cin >> input;
  int len = input.length();
  for (int i = len - 1; i >= 0; i--) {
    if (input[i] == 'q') {
      cout << 'p';
    }
    if (input[i] == 'p') {
      cout << 'q';
    }
    if (input[i] == 'w') {
      cout << 'w';
    }
  }
  cout << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 0; t < tc; t++) {
    solve();
  }
  return 0;
}
