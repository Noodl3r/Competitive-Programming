#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int n;
  cin >> n;

  vector<int> v(n);
  for (auto& x : v)
    cin >> x;
  for (int i = 0; i < n - 1; i++) {
    if (v[i] > v[i + 1]) {
      cout << 0 << endl;
      return;
    }
  }

  ll sol = INT_MAX;
  for (int i = 0; i < n - 1; i++) {
    ll gap = v[i + 1] - v[i];
    sol = min(sol, gap / 2 + 1);
  }
  cout << sol << endl;
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
