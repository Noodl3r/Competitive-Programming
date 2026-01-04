#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int n;
  cin >> n;
  vector<int> input(n);
  for (int i = 0; i < n; i++) {
    cin >> input[i];
  }
  int l = 0, r = n - 1;
  bool left = true;

  vector<int> output;
  while (l <= r) {
    if (left) {
      output.push_back(input[l++]);
    } else {
      output.push_back(input[r--]);
    }
    left = !left;
  }
  for (auto x : output) {
    cout << x << ' ';
  }
  cout << endl;
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
