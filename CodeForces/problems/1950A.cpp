#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a < b && b < c) {
    cout << "STAIR" << endl;
  } else if (a < b && b > c) {
    cout << "PEAK" << endl;
  } else {
    cout << "NONE" << endl;
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
