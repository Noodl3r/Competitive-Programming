#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int n, s;
  cin >> n >> s;

  vector<int> positions(n);
  for (int i = 0; i < n; i++)
    cin >> positions[i];

  cout << min(abs(s - positions[0]), abs(s - positions.back())) + positions.back() - positions[0]
       << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
  return 0;
}
