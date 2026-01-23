#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

struct box {
  int index, count, capacity;
};

bool cmpcap(const box& a, const box& b) {
  return a.capacity > b.capacity;
}
int main() {
  fastio;
  int n, m;
  cin >> n >> m;
  vector<box> boxes;
  for (int i = 0; i < m; i++) {
    int temp, temp2;
    cin >> temp >> temp2;
    boxes.push_back({i, temp, temp2});
  }
  sort(boxes.begin(), boxes.end(), cmpcap);

  int final = 0;
  for (int i = 0; i < m && n > 0; i++) {
    ll take = min(n, boxes[i].count);
    final += take * boxes[i].capacity;
    n -= take;
  }
  cout << final << endl;

  return 0;
}
