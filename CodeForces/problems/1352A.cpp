#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  string s;
  cin >> s;

  int n = s.size();
  vector<int> parts;

  int place = 1;
  for (int i = n - 1; i >= 0; i--) {
    if (s[i] != '0') {
      parts.push_back((s[i] - '0') * place);
    }
    place *= 10;
  }
  cout << parts.size() << endl;
  for (int x : parts)
    cout << x << ' ';
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
