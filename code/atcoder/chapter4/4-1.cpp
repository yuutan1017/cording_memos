#include<bits/stdc++.h>

#define BUF 100010
using namespace std;

// A16
void basic()
{
  int n, a[BUF], b[BUF], dp[BUF];

  cin >> n;
  for (int i = 2; i <= n; i ++) cin >> a[i];
  for (int i = 3; i <= n; i ++) cin >> b[i];

  dp[1] = 0;
  dp[2] = a[2];
  for (int i = 3; i <= n; i++)
  {
    dp[i] = min(dp[i - 1] + a[i], dp[i - 2] + b[i]);
  }

  cout << dp[n] << endl;
}

//B16
void advance()
{
  int n, h[BUF], dp[BUF];
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> h[i];

  dp[1] = 0;
  dp[2] = abs(h[1] - h[2]);
  for (int i = 3; i <= n; i++)
  {
    dp[i] = min(dp[i - 2] + abs(h[i - 2] - h[i]), dp[i - 1] + abs(h[i - 1] - h[i]));
  }

  cout << dp[n] << endl;
}
