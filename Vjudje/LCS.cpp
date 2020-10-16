#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define ft first
#define sd second
#define pb push_back
#define pob pop_back()
#define pf push_front
#define pof pop_front()
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<char,char> pcc;
typedef pair<long long,long long> pll;

int main() {
    #ifndef LOCAL
    fastIO;
    #endif
    int lim1,lim2;
    string s,t,rta="";
    cin >> s;
    cin >> t;
    lim1=s.size()+1;
    lim2=t.size()+1;
    int dp[lim1][lim2];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<lim1;i++){
        for(int j=1;j<lim2;j++){
            if(s[i-1]==t[j-1]) dp[i][j]=dp[i-1][j-1]+1;
            else if(dp[i-1][j]>=dp[i][j-1]) dp[i][j]=dp[i-1][j];
            else dp[i][j]=dp[i][j-1];
        }
    }
    int i=lim1-1;
    int j=lim2-1;
    while(i>0 && j>0){
        if(dp[i][j]-1==dp[i-1][j-1]) {rta+=s[i];i--;j--;}
        else if(dp[i-1][j]>=dp[i][j-1]) i--;
        else j--;
    }
    reverse(rta.begin(),rta.end());
    cout << rta << endl;
    for(auto &x:dp){
        for(auto &y:x){
            cout << y;
        }
        cout << endl;
    }
    return 0;
}

