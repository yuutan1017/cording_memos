#include<bits/stdc++.h>

#define BUF 100010
using namespace std;



void basic()
{
  int n, a[BUF], b[BUF], dp[BUF];
  cin >> n;
  for (int i = 2; i <= n; i++) cin >> a[i];
  for (int i = 3; i <= n; i++) cin >> b[i];

  dp[1] = 0;
  dp[2] = a[2];
  for (int i = 3; i <= n; i++)
  {
    dp[i] = min(dp[i - 1] + a[i], dp[i - 2] + b[i]);
  }

  int place = n;
  vector<int> ans;

  while(true)
  {
    ans.push_back(place);
    if(place == 1) break;

    if(dp[place - 1] + a[place] == dp[place]) place -= 1;
    else place -= 2;
  }

  reverse(ans.begin(), ans.end());

  cout << ans.size() << endl;
  for (int i = 1; i < ans.size(); i++)
  {
    if(i >= 1) cout << " ";
    cout << ans[i];
  }
  cout << endl;
}


void advance()
{
  int n, h[BUF], dp[BUF];

  cin >> n;
  for (int i = 1; i <= n; i++) cin >> h[i];

  dp[1] = 0;
  dp[2] = abs(h[1] - h[2]);
  for (int i = 3; i <= n; i++)
  {
    dp[i] = min(abs(h[i - 2] - h[i]) + dp[i - 2], abs(h[i - 1] - h[i]) + dp[i - 1]);
  }

  vector<int> ans;
  int place = n;
  while(true)
  {
    ans.push_back(place);
    if(place == 1) break;

    if(dp[place - 1] + abs(h[place - 1] - h[place]) == dp[place]) place -= 1;
    else place -= 2;
  }

  reverse(ans.begin(), ans.end());

  cout << ans.size() << endl;
  for (int i = 1; i < ans.size(); i++)
  {
    if(i >= 1) cout << " ";
    cout << ans[i];
  }
  cout << endl;
}
