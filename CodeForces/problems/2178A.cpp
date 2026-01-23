#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  string s;
  cin >> s;

  //Since Y's annihilate all the N's.
  int y = 0;
  for (const auto& x : s) {
    if (x == 'Y')
      y++;
  }

  cout << (y > 1 ? "NO" : "YES") << endl;
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
