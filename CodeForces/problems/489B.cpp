#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

int main() {
  fastio;
  int n, m;
  cin >> n;
  vector<int> boys(n);
  for (auto &x : boys)
    cin >> x;

  cin >> m;
  vector<int> girls(m);
  for (auto &x : girls)
    cin >> x;

  sort(boys.begin(), boys.end());
  sort(girls.begin(), girls.end());

  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (abs(boys[i] - girls[j]) <= 1) {
        girls[j] = 105;
        count++;
        break;
      }
    }
  }
  cout << count << endl;
}
