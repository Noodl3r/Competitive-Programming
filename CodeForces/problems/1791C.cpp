#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int n;
  string s;
  cin >> n >> s;
  int sol = n;

  int l = 0, r = n - 1;
  while (s[l] != s[r] && sol > 0) {
    l++;
    r--;
    sol -= 2;
  }
  cout << sol << endl;
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
