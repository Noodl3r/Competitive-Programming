#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

int main() {
  fastio;
  int n, t;
  cin >> n >> t;
  vector<int> lengths(n);
  for (int i = 0; i < n; i++)
    cin >> lengths[i];

  int count = 0, l = 0;
  long long sum = 0;

  for (int r = 0; r < n; r++) {
    sum += lengths[r];
    while (sum > t) {
      sum -= lengths[l];
      l++;
    }
    count = max(count, r - l + 1);
  }

  cout << count << endl;
}
