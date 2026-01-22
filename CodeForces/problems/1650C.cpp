#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

struct point {
  int idx, weight, pos;
};

bool cmpw(const point& a, const point& b) {
  return a.weight < b.weight;
}

bool cmpp(const point& a, const point& b) {
  return a.pos < b.pos;
}

void solve() {
  int n, m;
  cin >> n >> m;

  vector<point> points(m);
  for (int i = 0; i < m; i++) {
    cin >> points[i].pos >> points[i].weight;
    points[i].idx = i + 1;
  }

  sort(points.begin(), points.end(), cmpw);

  vector<point> best(points.begin(), points.begin() + 2 * n);
  ll final = 0;
  for (const auto& p : best) {
    final += p.weight;
  }

  sort(best.begin(), best.end(), cmpp);

  cout << final << endl;
  for (int i = 0; i < n; i++) {
    cout << best[i].idx << ' ' << best[2 * n - 1 - i].idx << endl;
  }
}
int main() {
  fastio;
  int tc;
  cin >> tc;
  while (tc--) {
    solve();
    cout << endl;
  }
  return 0;
}
