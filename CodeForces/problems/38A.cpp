#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  int n, a, b, output = 0;
  cin >> n;
  vector<int> inputs(n - 1);
  for (int i = 0; i < n - 1; i++) {
    cin >> inputs[i];
  }

  cin >> a >> b;

  for (int i = a - 1; i < b - 1; i++) {
    output += inputs[i];
  }

  cout << output << endl;
  return 0;
}
