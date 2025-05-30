#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

int main() {
  fastio;
  int taxis = 0;
  int n;
  cin >> n;
  int s1 = 0, s2 = 0, s3 = 0, s4 = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x == 1)
      s1++;
    else if (x == 2)
      s2++;
    else if (x == 3)
      s3++;
    else if (x == 4)
      s4++;
  }

  taxis += s4;
  int pair31 = min(s3, s1);
  taxis += pair31;
  s3 -= pair31;
  s1 -= pair31;

  taxis += s3;

  taxis += s2 / 2;
  s2 %= 2;

  if (s2) {
    taxis += 1;
    s1 -= min(2, s1);
  }
  if (s1 > 0) {
    taxis += (s1 + 3) / 4;
  }
  cout << taxis << endl;
}
