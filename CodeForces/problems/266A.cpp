#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  int n, output = 0;
  cin >> n;
  char current = ' ';
  for (int i = 0; i < n; i++) {
    char temp;
    cin >> temp;
    if (temp == current) {
      output++;
    }
    current = temp;
  }
  cout << output << endl;

  return 0;
}
