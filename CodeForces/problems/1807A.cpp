#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a + b == c) {
    cout << "+" << endl;
    return;
  } else {
    cout << "-" << endl;
    return;
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
