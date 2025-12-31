#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int n;
  cin >> n;
  vector<int> values(n);
  for (int i = 0; i < n; i++) {
    cin >> values[i];
  }
  int zero_count = 0;
  for (auto x : values) {
    if (x == 0)
      zero_count++;
  }
  if (zero_count >= 2) {
    cout << 0 << endl;
    return;
  }
  ll final = 1;
  if (zero_count == 1) {
    for (int x : values) {
      if (x == 0)
        continue;
      final *= x;
    }
    cout << final << endl;
    return;
  }
  int min_index = 0;
  for (int i = 1; i < n; i++) {
    if (values[i] < values[min_index]) {
      min_index = i;
    }
  }
  values[min_index]++;
  for (int x : values) {
    final *= x;
  }
  cout << final << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
}
