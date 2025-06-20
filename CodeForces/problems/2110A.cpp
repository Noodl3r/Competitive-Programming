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
  sort(a.begin(), a.end());

  if (a[0] % 2 == a[n - 1] % 2) {
    cout << 0 << endl;
    return;
  }

  int l = n, r = n;
  for (int i = 1; i < n; i++) {
    if (a[i] % 2 != a[0] % 2) {
      l = i;
      break;
    }
  }

  for (int i = 1; i < n; i++) {
    if (a[n - i - 1] % 2 != a[n - 1] % 2) {
      r = i;
      break;
    }
  }
  cout << min(l, r) << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
}
