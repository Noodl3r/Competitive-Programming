#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int n, m;
  cin >> n >> m;

  string x, s;
  cin >> x >> s;

  for (int i = 0; i < 6; i++) {
    if (x.find(s) != string::npos) {
      cout << i << endl;
      return;
    }
    x += x;
  }
  cout << -1 << endl;
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
