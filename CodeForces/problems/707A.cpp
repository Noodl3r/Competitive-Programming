#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);

int main() {
  fastio;
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      char temp;
      cin >> temp;

      if (temp == 'C' || temp == 'M' || temp == 'Y') {
        cout << "#Color" << endl;
        return 0;
      }
    }
  }
  cout << "#Black&White" << endl;
  return 0;
}
