#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  int Mishka = 0, Chris = 0, n;
  cin >> n;
  while (n--) {
    int temp, temp2;
    cin >> temp >> temp2;
    if (temp > temp2)
      Mishka++;
    else if (temp < temp2)
      Chris++;
  }
  if (Mishka == Chris) {
    cout << "Friendship is magic!^^" << endl;
    return 0;
  } else {
    cout << (Mishka > Chris ? "Mishka" : "Chris") << endl;
    return 0;
  }
}
