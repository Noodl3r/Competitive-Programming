#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int x = 0, y = 0, n;
  cin >> n;
  string input;
  cin >> input;
  for (char temp : input) {
    switch (temp) {
    case 'L':
      x--;
      break;
    case 'R':
      x++;
      break;
    case 'U':
      y++;
      break;
    case 'D':
      y--;
      break;
    }
    if (x == 1 && y == 1) {
      cout << "YES" << endl;
      return;
    }
  }
  cout << "NO" << endl;
  return;
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
