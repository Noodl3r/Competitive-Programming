#include <bits/stdc++.h>
#include <cstdint>
#include <sys/types.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  string s, output;
  cin >> s;
  for (size_t i = 0; i < s.length(); i++) {
    if (i + 2 < s.length() && s.substr(i, 3) == "WUB") {
      output += ' ';
      i += 2;
    } else {
      output += s[i];
    }
  }
  cout << output << endl;

  return 0;
}
