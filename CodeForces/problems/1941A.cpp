#include <bits/stdc++.h>
#include <cstdio>
#include <unordered_map>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> b(n), c(m);
  for (int& x : b)
    cin >> x;
  for (int& x : c)
    cin >> x;

  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      b[i] + c[j] <= k ? count++ : 0;
    }
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
