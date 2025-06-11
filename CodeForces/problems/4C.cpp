#include <bits/stdc++.h>
#include <string>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

int main() {
  fastio;
  int tc;
  cin >> tc;
  map<string, int> nameCount;

  for (int t = 1; t <= tc; t++) {
    string temp;
    cin >> temp;
    if (nameCount[temp] == 0) {
      cout << "OK" << endl;
    } else {
      cout << temp << nameCount[temp] << endl;
    }
    nameCount[temp]++;
  }
}
