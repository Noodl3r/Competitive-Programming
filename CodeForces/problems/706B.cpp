#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

int main() {
  fastio;
  int shops, q;
  cin >> shops;
  vector<int> prices(shops);

  for (auto &x : prices)
    cin >> x;
  sort(prices.begin(), prices.end());

  cin >> q;
  while (q--) {
    int temp;
    cin >> temp;
    auto pos = upper_bound(prices.begin(), prices.end(), temp);
    cout << distance(prices.begin(), pos) << endl;
  }
}
