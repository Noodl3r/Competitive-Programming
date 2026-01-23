#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  string target = "heidi";
  int j = 0;

  string s;
  cin >> s;
  for (auto& x : s) {
    if (x == target[j]) {
      j++;
    }
  }
  if (j >= 5) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
