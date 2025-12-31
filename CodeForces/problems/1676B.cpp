#include <bits/stdc++.h>
#define ll long long

using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);

void solve() {
  ll n, lowest = 10e7, count = 0;
  cin >> n;
  vector<int> values(n);
  while (n--) {
    int temp;
    cin >> temp;
    values[n] = temp;
    if (temp < lowest) {
      lowest = temp;
    }
  }

  for (auto x : values) {
    count += x - lowest;
  }
  cout << count << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
}
