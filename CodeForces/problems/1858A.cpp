#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int a, b, c;
  cin >> a >> b >> c;

  if (a + c % 2 > b) {
    cout << "First" << endl;
  } else {
    cout << "Second" << endl;
  }
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
