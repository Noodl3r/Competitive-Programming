#include <iostream>
using namespace std;

int main() {
  int tc = 1, count = 0;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    int space, people;
    cin >> people >> space;
    if (space - people > 1) {
      count++;
    }
  }
  cout << count << endl;
}
