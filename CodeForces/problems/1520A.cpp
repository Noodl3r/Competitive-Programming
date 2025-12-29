#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);

void solve() {
  int n;
  string input;
  cin >> n >> input;
  unordered_set<char> values;

  if (n == 1) {
    cout << "YES" << endl;
    return;
  }

  for (int i = 1; i < n; i++) {
    if (input[i - 1] != input[i]) {
      values.insert(input[i - 1]);
    }
    if (values.count(input[i])) {
      cout << "NO" << endl;
      return;
    }
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
