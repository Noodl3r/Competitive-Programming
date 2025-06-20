#include <bits/stdc++.h>

using namespace std;

string sl, sr;
int n;
int memo[11][2][2];

int solve(int pos, bool t_l, bool t_r) {
  if (pos == n) {
    return 0;
  }

  if (memo[pos][t_l][t_r] != -1) {
    return memo[pos][t_l][t_r];
  }

  int mc = 1e9;
  int lo_b = t_l ? (sl[pos] - '0') : 0;
  int up_b = t_r ? (sr[pos] - '0') : 9;

  for (int digit = lo_b; digit <= up_b; ++digit) {
    int current_pos_cost = 0;
    if (digit == (sl[pos] - '0')) {
      current_pos_cost++;
    }
    if (digit == (sr[pos] - '0')) {
      current_pos_cost++;
    }

    bool new_t_l = t_l && (digit == lo_b);
    bool new_t_r = t_r && (digit == up_b);

    int future_cost = solve(pos + 1, new_t_l, new_t_r);
    mc = min(mc, current_pos_cost + future_cost);
  }

  return memo[pos][t_l][t_r] = mc;
}

void run_case() {
  int l_val, r_val;
  cin >> l_val >> r_val;

  sl = to_string(l_val);
  sr = to_string(r_val);
  n = sl.length();

  memset(memo, -1, sizeof(memo));

  cout << solve(0, true, true) << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    run_case();
  }

  return 0;
}
