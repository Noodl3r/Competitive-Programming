#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

void solve() {
  int n;
  cin >> n;
  for (int i = 0; i < 20; i++) {
    if (n % 11 == 0) {
      cout << "YES" << endl;
      break;
    }
    n -= 111;
    if (n < 0) {
      cout << "NO" << endl;
      break;
    }
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
