#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int counts = 0, n = 5;
  while (n--) {
    char temp;
    cin >> temp;
    if (temp == 'A')
      counts++;
  }
  if (counts >= 3) {
    cout << 'A' << endl;
    return;
  }
  cout << 'B' << endl;
  return;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
}
