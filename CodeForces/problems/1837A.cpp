#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int x, k;
  cin >> x >> k;
  if (x % k == 0) {
    cout << 2 << endl;
    cout << x - 1 << ' ' << 1 << endl;
  } else {
    cout << 1 << endl;
    cout << x << endl;
  }
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
