#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

void solve() {
  string input;
  cin >> input;
  int len = input.length();
  if (len % 2 == 1) {
    cout << "NO" << endl;
    return;
  }
  string first, second;
  first = input.substr(0, len / 2);
  second = input.substr(len / 2, len / 2);
  if (first == second) {
    cout << "YES" << endl;
    return;
  } else {
    cout << "NO" << endl;
    return;
  }
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++)
    solve();
}
