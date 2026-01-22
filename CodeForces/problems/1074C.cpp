#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int n;
  cin >> n;
  vector<ll> vals(n);
  for (int i = 0; i < n; i++) {
    cin >> vals[i];
  }

  sort(vals.begin(), vals.end());
  vals.erase(unique(vals.begin(), vals.end()), vals.end());

  ll best = 0, cur = 0;
  for (int i = 0; i < (int)vals.size(); i++) {
    if (i == 0 || vals[i] != vals[i - 1] + 1) {
      cur = 1;
    } else
      cur++;
    best = max(best, cur);
  }

  cout << best << endl;
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
