#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);
  unordered_map<int, int> values;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    values[a[i]]++;
  }

  int output = -1;
  for (auto &p : values) {
    if (p.second >= 3) {
      output = p.first;
      break;
    }
  }
  cout << output << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
}
