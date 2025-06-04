#include <bits/stdc++.h>
#include <cmath>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

void solve() {
  int a, b, dif;
  cin >> a >> b;
  dif = abs(a - b);
  cout << (dif + 9) / 10 << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
}
