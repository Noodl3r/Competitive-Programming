#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int n, max = 0, min = INT_MAX;
  cin >> n;

  while (n--) {
    int temp;
    cin >> temp;

    if (temp < min) {
      min = temp;
    }
    if (temp > max) {
      max = temp;
    }
  }
  cout << max - min << endl;
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
