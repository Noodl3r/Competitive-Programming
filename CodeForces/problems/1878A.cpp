#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

void solve() {
  int n, k;
  cin >> n >> k;

  set<int> a;
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    a.insert(temp);
  }

  cout << ((a.count(k)) ? "YES" : "NO") << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
}
