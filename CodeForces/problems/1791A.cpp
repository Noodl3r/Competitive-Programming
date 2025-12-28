#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

set<string> CFset = {"c", "o", "d", "e", "f", "r", "s"};
void solve() {
  char val;
  cin >> val;
  cout << ((CFset.count(string(1, val)) ? "YES" : "NO")) << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
}
