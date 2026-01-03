#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int n, m;
  cin >> n >> m;
  string input;
  cin >> input;

  vector<int> freq(26, 0);
  for (char c : input)
    freq[c - 'a']++;

  int odd = 0;
  for (auto x : freq) {
    if (x % 2)
      odd++;
  }

  int remaining = n - m;
  int target = remaining % 2;

  if (odd <= m + target)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
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
