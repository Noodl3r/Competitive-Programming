#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int a, b;
  cin >> a >> b;
  if (a == b)
    cout << 0 << endl;
  else {
    cout << 1 + int((a < b) ^ ((b - a) & 1)) << endl;
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
