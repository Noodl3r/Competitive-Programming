#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  string target = "abc", input;
  int n = 3, total = 0;
  ;
  cin >> input;
  while (n--) {
    if (input[n] != target[n]) {
      total++;
    }
  }
  cout << (total == 0 || total == 2 ? "YES" : "NO") << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
  return 0;
}
