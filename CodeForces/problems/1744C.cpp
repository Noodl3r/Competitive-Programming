#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int n;
  char c;
  string s;
  cin >> n >> c >> s;

  //cycle fix
  s += s;

  int longest = 0;
  int nextG = -1;

  for (int i = 2 * n - 1; i >= 0; i--) {
    if (s[i] == 'g')
      nextG = i;
    if (s[i] == c && nextG != -1) {
      longest = max(longest, nextG - i);
    }
  }
  cout << longest << endl;
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
