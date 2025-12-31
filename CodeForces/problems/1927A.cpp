#include <bits/stdc++.h>
#include <iterator>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int n, start_indx = -1, end_indx = 0;
  string input;
  cin >> n >> input;
  for (int i = 0; i < n; i++) {
    char test = input[i];
    if (start_indx == -1 && test == 'B') {
      start_indx = i;
    }
    if (test == 'B') {
      end_indx = i;
    }
  }
  cout << end_indx - start_indx + 1 << endl;
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
