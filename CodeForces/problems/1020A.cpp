#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

void solve() {
  int s, total = 0;
  string str;
  cin >> s >> str;
  for (int i = 0; i < s; i++) {
    string temp = str;
    if (temp[i] == '1') {
      temp[i] = '0';
    } else if (temp[i] == '0') {
      temp[i] = '1';
    }
    total += count(temp.begin(), temp.end(), '1');
  }
  cout << total << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
}
