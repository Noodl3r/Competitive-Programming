#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;

  int slept = 0, awake = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '1') {
      awake = k;
    } else if (awake > 0) {
      awake--;
    } else if (s[i] == '0') {
      slept++;
    }
  }

  cout << slept << endl;
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
