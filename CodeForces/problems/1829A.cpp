#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  string target = "codeforces";
  string input;
  cin >> input;
  int counter = 0;
  for (int i = 0; i < 10; i++) {
    input[i] != target[i] ? counter++ : 0;
  }
  cout << counter << endl;
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
