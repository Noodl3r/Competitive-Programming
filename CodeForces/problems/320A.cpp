#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  string s;
  cin >> s;
  int len = s.length();
  for (int i = 0; i < len;) {
    if (i < len - 2 && s.substr(i, 3) == "144") {
      i += 3;
      continue;
    }

    else if (i < len - 1 && s.substr(i, 2) == "14") {
      i += 2;
      continue;
    }

    else if (s[i] == '1') {
      i++;
      continue;
    } else {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;
  return 0;
}
