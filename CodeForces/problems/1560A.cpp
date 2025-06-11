#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

const int N = 10000;
vector<int> isGood(N, 0);
vector<int> sieve() {
  vector<int> result;
  for (int i = 0; i < N; i++) {
    if (i % 3 != 0 && i % 10 != 3)
      result.push_back(i);
  }
  return result;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  vector<int> list = sieve();
  for (int t = 1; t <= tc; t++) {
    int temp;
    cin >> temp;
    cout << list[temp - 1] << endl;
  }
}
