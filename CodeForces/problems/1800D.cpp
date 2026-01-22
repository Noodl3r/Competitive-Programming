#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int n;
  cin >> n;
  string input;
  cin >> input;

  int final = n - 1;

  for (int i = 1; i + 1 < n; i++) {
    input[i - 1] == input[i + 1] ? final-- : 0;
  }

  cout << final << endl;
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
