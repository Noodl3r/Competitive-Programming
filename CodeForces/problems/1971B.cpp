#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  string s;
  cin >> s;
  int n = s.length();
  bool allSame = true;
  int i = 0;
  for (; i < n - 1; i++) {
    if (s[i] != s[i + 1]) {
      allSame = false;
      char temp = s[i];
      s[i] = s[i + 1];
      s[i + 1] = temp;
      break;
    }
  }
  if (allSame) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl << s << endl;
  }
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
