#include <algorithm>
#include <bits/stdc++.h>
#include <numeric>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

int main() {
  fastio;
  int n;
  cin >> n;
  vector<long long> vals(n);
  for (auto &x : vals) {
    cin >> x;
  }
  long long tot = accumulate(vals.begin(), vals.end(), 0LL);
  if (tot % 2 == 1) {
    cout << "NO" << endl;
    return 0;
  }

  long long max_val = *max_element(vals.begin(), vals.end());

  if (max_val > tot - max_val) {
    cout << "NO" << endl;
    return 0;
  }

  cout << "YES" << endl;
  return 0;
}
