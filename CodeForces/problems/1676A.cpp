#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);

void solve() {
  string input;
  cin >> input;
  int part1 = input[0] + input[1] + input[2];
  int part2 = input[3] + input[4] + input[5];
  cout << (part1 == part2 ? "YES" : "NO") << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
}
