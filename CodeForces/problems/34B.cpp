#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

int main() {
  fastio;
  int n, m;
  cin >> n >> m;
  vector<int> tvs;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    tvs.push_back(x);
  }
  sort(tvs.begin(), tvs.end());
  for (int &x : tvs) {
    x *= -1;
  }
  int total = 0, count = 0;
  for (int x : tvs) {
    if ((x > 0) && (count < m)) {
      total += x;
      count++;
    }
  }
  cout << total;
}
