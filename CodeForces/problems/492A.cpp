#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  int n;
  cin >> n;
  int h = 0;
  while (true) {
    long long test = 1LL * (h + 1) * (h + 2) * (h + 3) / 6;
    if (test > n)
      break;
    h++;
  }
  cout << h << endl;
}
