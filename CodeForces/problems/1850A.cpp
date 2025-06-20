#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a + b >= 10 || a + c >= 10 || b + c >= 10) {
    cout << "YES" << endl;
    return;
  }
  cout << "NO" << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
}
