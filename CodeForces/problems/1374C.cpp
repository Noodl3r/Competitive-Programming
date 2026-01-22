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

  int bal = 0, max_unbal = 0;

  for (auto x : s) {
    if (x == '(')
      bal++;
    else
      bal--;
    if (bal < 0)
      max_unbal = max(max_unbal, -bal);
  }
  cout << max_unbal << endl;
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
