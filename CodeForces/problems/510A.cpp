#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  int n, m;
  cin >> n >> m;
  bool flag = true;
  //bool flag = false;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (i % 2 == 0) {
        cout << "#";
        continue;
      }
      if (flag) {
        if (j == m - 1)
          cout << "#";
        else
          cout << ".";
      } else {
        if (j == 0)
          cout << "#";
        else
          cout << ".";
      }
    }
    if (i % 2)
      flag = !flag;
    cout << endl;
  }
  return 0;
}
