#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

void solve() {
  int n;
  cin >> n;
  vector<int> x(n);
  set<int> nums;
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }
  for (int i = 0; i < n; i++) {
    if (nums.find(x[i]) != nums.end()) {
      cout << "NO" << endl;
      return;
    }
    nums.insert(x[i]);
  }
  cout << "YES" << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
}
