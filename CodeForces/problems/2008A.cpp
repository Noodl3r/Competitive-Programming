#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

void solve() {
  int a, b;
  cin >> a >> b;
  if (a % 2) {
    cout << "NO" << endl;
  } else if (b % 2 == 0) {
    cout << "YES" << endl;
  } else if (a == 0) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
}
