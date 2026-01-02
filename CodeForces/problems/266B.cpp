#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  int n, t;
  cin >> n >> t;
  vector<char> positions(n);
  for (int i = 0; i < n; i++) {
    cin >> positions[i];
  }
  while (t--) {
    for (int i = 0; i < n - 1; i++) {
      if (positions[i] == 'B' && positions[i + 1] == 'G') {
        positions[i] = 'G';
        positions[i + 1] = 'B';
        i++;
      }
    }
  }

  for (auto x : positions)
    cout << x;
  cout << endl;

  return 0;
}
