#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);

int main() {
  fastio;
  int a, b, c;
  cin >> a >> b >> c;
  vector<int> v = {a, b, c};
  sort(v.begin(), v.end());

  int answer = abs(v[0] - v[1]) + abs(v[2] - v[1]);
  cout << answer << endl;
}
