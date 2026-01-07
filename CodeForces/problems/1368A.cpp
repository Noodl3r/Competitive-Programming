#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int a, b, n, count = 0;
  cin >> a >> b >> n;
  while (max(a, b) <= n) {
    a < b ? (a += b) : (b += a);
    count++;
  }
  cout << count << endl;
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
