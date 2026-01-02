#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  int teams, count = 0;
  cin >> teams;

  vector<int> home(teams), away(teams);
  for (int i = 0; i < teams; i++) {
    cin >> home[i] >> away[i];
  }

  for (int i = 0; i < teams; i++) {
    for (int j = 0; j < teams; j++) {
      if (i != j && home[i] == away[j]) {
        count++;
      }
    }
  }

  cout << count << endl;

  return 0;
}
