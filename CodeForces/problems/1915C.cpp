#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  ll n, total = 0;
  cin >> n;
  while (n--) {
    ll temp;
    cin >> temp;
    total += temp;
  }
  ll s = sqrt(total);
  cout << (s * s == total ? "YES" : "NO") << endl;
}

int main() {
  fastio;
  ll tc;
  cin >> tc;
  for (ll t = 1; t <= tc; t++) {
    solve();
  }
  return 0;
}
