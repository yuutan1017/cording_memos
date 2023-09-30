#include<bits/stdc++.h>

#define BUF 100010
using namespace std;



void basic()
{
  int n, s, a[100];
  bool dp[100][BUF];

  cin >> n >> s;
  for (int i = 1; i <= n; i++) cin >> a[i];

  dp[0][0] = true;
  for (int i = 1; i <= s; i++) dp[0][i] = false;

  for (int i = 1; i <= n; i++){
    for (int j = 0; j <= s; j++){

      if(j < a[i]){
        if(dp[i - 1][j] == true) dp[i][j] = true;
        else dp[i][j] = false;
      }
      if(j >= a[i]){
        if(dp[i - 1][j] == true || dp[i - 1][j - a[i]] == true) dp[i][j] = true;
        else dp[i][j] = false;
      }
    }
  }

  if(dp[n][s] == true) cout << "Yes" << endl;
  else cout << "No" << endl;
}

void advance()
{
  int n, s, a[100];
  bool dp[100][BUF];

  cin >> n >> s;
  for (int i = 1; i <= n; i++) cin >> a[i];
}
