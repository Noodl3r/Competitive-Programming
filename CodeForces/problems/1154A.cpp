#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

int main() {
  fastio;
  vector<int> numbers(4);
  for (int i = 0; i < 4; i++)
    cin >> numbers[i];

  int top = *max_element(numbers.begin(), numbers.end());

  for (int num : numbers) {
    int temp = top - num;
    if (temp)
      cout << temp << endl;
  }
}
