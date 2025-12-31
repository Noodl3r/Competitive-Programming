#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);

void solve() {
  int a, b, c, n;
  cin >> a >> b >> c >> n;

  int largest = max({a, b, c});
  n -= (largest - a) + (largest - b) + (largest - c);

  if (n % 3 == 0 && n >= 0) {
    cout << "YES" << endl;
    return;
  }
  cout << "NO" << endl;
  return;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
}
