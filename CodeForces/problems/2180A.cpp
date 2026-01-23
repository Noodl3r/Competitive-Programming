#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int a, b, l;
  cin >> l >> a >> b;

  unordered_set<int> visited;
  int max = -INT_MAX;

  for (int i = a;; i += b) {
    if (i >= l) {
      i %= l;
    }
    if (i > max)
      max = i;
    if (visited.count(i))
      break;

    visited.insert(i);
  }
  cout << max << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }
  return 0;
}
