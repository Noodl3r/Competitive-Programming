#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  int n, pos_s = 0, pos_t = 0, max = -1, min = INT_MAX;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    if (temp > max) {
      max = temp;
      pos_t = i;
    }
    if (temp <= min) {
      min = temp;
      pos_s = i;
    }
  }

  int moves = pos_t + (n - 1 - pos_s);
  pos_t > pos_s ? moves-- : 0;

  cout << moves << endl;
  return 0;
}
