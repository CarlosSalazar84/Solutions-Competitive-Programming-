#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

int main(){
  int t, n;
  while(cin >> t){
    cin >> n;
    int dp[t+1];
    int art[n];

    for(int i = 0; i<=t; i++)
      dp[i] = i;

    for(int i = 0; i<n; i++)
      cin >> art[i];

    for(int i = 0; i<=t; i++){
      for(int j = 0; j<n; j++){
        if(i-art[j] >= 0)
          dp[i] = min(dp[i-art[j]], dp[i]);
      }
    }
    cout << dp[t] << endl;
  }
  return 0;
}
