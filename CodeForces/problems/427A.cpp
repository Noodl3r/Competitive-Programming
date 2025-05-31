#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

int main() {
  fastio;
  int tc, cops = 0, crimes = 0, temp;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    cin >> temp;
    if (temp == -1) {
      if (cops) {
        cops--;
      } else {
        crimes++;
      }
    } else {
      cops += temp;
    }
  }
  cout << crimes << endl;
}
