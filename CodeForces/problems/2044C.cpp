#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  ll m, a, b, c;
  cin >> m >> a >> b >> c;

  ll o_seats1 = min(a, m);
  ll o_seats2 = min(b, m);

  ll free_seats1 = (m - o_seats1) + (m - o_seats2);
  ll o_seats3 = min(c, free_seats1);

  cout << o_seats1 + o_seats2 + o_seats3 << endl;
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
