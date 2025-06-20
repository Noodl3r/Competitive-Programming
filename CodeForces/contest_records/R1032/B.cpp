#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

void solve() {
  int n;
  string s;
  bool done = false;
  cin >> n >> s;

  int counts[26] = {0};
  for (char ch : s) {
    counts[ch - 'a']++;
  }

  for (int i = 1; i < n - 1; i++) {
    if (counts[s[i] - 'a'] > 1) {
      done = true;
      break;
    }
  }
  if (done) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
}
