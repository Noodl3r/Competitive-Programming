#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

int main() {
  fastio;
  int ceiling;
  cin >> ceiling;
  vector<bool> levels(ceiling, false);

  int p, s;
  cin >> p;
  for (int i = 0; i < p; i++) {
    int x;
    cin >> x;
    levels[x - 1] = true;
  }
  cin >> s;
  for (int i = 0; i < s; i++) {
    int x;
    cin >> x;
    levels[x - 1] = true;
  }

  cout << (count(levels.begin(), levels.end(), false) ? "Oh, my keyboard!"
                                                      : "I become the guy.")
       << endl;
}
