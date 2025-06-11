#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

int main() {
  fastio;
  int n;
  cin >> n;
  vector<int> times(n);
  for (auto &x : times)
    cin >> x;

  sort(times.begin(), times.end());

  int total = 0, count = 0;
  for (auto x : times) {
    if (x >= total) {
      count++;
      total += x;
    }
  }
  cout << count;
}
