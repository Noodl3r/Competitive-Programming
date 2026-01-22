#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int n, m, h;
  cin >> n >> m >> h;
  vector<ll> v(n), delta(n, 0), last_update(n, -1);
  vector<ll> original(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
    original[i] = v[i];
  }
  int last_reset = -1;

  for (int i = 0; i < m; i++) {
    int b;
    ll c;
    cin >> b >> c;
    b--;

    if (last_update[b] < last_reset)
      delta[b] = 0;

    delta[b] += c;

    if (v[b] + delta[b] > h) {
      last_reset = i;
      delta[b] = 0;
    }
    last_update[b] = i;
  }

  for (int i = 0; i < n; i++) {
    if (last_update[i] < last_reset)
      delta[i] = 0;
    cout << v[i] + delta[i] << ' ';
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
