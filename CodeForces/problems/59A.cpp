#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

int main() {
  fastio;
  string tc;
  cin >> tc;
  int up_count = count_if(tc.begin(), tc.end(), ::isupper);
  if (up_count > (int)tc.size() / 2) {
    transform(tc.begin(), tc.end(), tc.begin(), ::toupper);
    cout << tc << endl;
  } else {
    transform(tc.begin(), tc.end(), tc.begin(), ::tolower);
    cout << tc << endl;
  }
}
