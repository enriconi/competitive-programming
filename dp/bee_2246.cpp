#include <bits/stdc++.h>

using namespace std;

#define MAXN 100010
#define MAXW 1010

int v, nM;
int memo[MAXN][MAXW], moedas[MAXN];

int dp(int i, int w) {
  if (i == 0) return 0;
  if (memo[i][w] != -1) return memo[i][w];
  if (w > v) return memo[i][w] = dp(i - 1, w);
  return memo[i][w] = max(dp(i - 1, w), dp(i - 1, w - moedas[i]) + moedas[i]);
}

int main()
{
  memset(moedas, 0, sizeof(moedas));
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  cin >> v >> nM;
  for (int i = 0; i < nM; i++) cin >> moedas[i];
  memset(memo, -1, sizeof(memo));
  cout << dp(nM, v) << '\n';

  return 0;
}