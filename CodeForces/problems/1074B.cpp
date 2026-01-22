#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int length;
  cin >> length;
  int n = length;

  int max = -INT_MAX;
  while (n--) {
    int temp;
    cin >> temp;
    if (temp > max) {
      max = temp;
    }
  }

  cout << length * max << endl;
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
