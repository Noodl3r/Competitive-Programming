#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int n;
  cin >> n;
  deque<int> positions;
  while (n--) {
    string temp;
    cin >> temp;
    for (int i = 0; i < 4; i++) {
      if (temp[i] == '#') {
        positions.push_front(i + 1);
      }
    }
  }
  for (auto x : positions) {
    cout << x << ' ';
  }
  cout << endl;
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
