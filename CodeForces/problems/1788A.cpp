#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int twocount = 0;
  for (int x : a)
    if (x == 2)
      twocount++;

  if (twocount % 2) {
    cout << -1 << endl;
    return;
  }

  int target = twocount / 2;
  int curr = 0;

  for (int i = 0; i < n - 1; i++) {
    if (a[i] == 2)
      curr++;
    if (curr == target) {
      cout << i + 1 << endl;
      return;
    }
  }
  cout << -1 << endl;
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
