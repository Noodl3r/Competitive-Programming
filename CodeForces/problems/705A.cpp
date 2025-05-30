#include <bits/stdc++.h>
using namespace std;

int main() {
  string message = "";
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    if (t % 2 == 1) {
      message.append("I hate that ");
    } else {
      message.append("I love that ");
    }
  }
  message.erase(message.size() - 5, 5);
  cout << message << "it";
}
