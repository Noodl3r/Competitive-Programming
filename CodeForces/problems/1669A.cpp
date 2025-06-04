#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

void solve() {
  int val;
  cin >> val;
  if (val <= 1399) {
    cout << "Division 4" << endl;
    return;
  } else if (val <= 1599) {
    cout << "Division 3" << endl;
    return;
  } else if (val <= 1899) {
    cout << "Division 2" << endl;
    return;
  } else {
    cout << "Division 1" << endl;
    return;
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
