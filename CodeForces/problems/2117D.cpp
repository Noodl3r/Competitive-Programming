#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &x : a)
    cin >> x;
  int dif = a[1] - a[0];
  for (int i = 0; i < n - 1; i++) {
    if (a[i + 1] - a[i] != dif) {
      cout << "NO" << endl;
      return;
    }
  }

  for (int i = 0; i < n; i++) {
    a[i] += (dif < 0 ? dif * (n - i) : -dif * (i + 1));
  }
  cout << ((a[0] >= 0 && a[0] % (n + 1) == 0) ? "YES" : "NO") << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
}
