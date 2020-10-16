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

const int MAX=100005;
int value[MAX][3];
int dp[MAX][4];

int happy(int i,int l){
    if(dp[i][l]!=-1) return dp[i][l];
    if(l==0) dp[i][0]=max(happy(i+1,1),happy(i+1,2))+value[i][0];
    else if(l==1) dp[i][1]=max(happy(i+1,0),happy(i+1,2))+value[i][1];
    else if(l==2) dp[i][2]=max(happy(i+1,0),happy(i+1,1))+value[i][2];
    return dp[i][l];
}

int main() {
    #ifndef LOCAL
    fastIO;
    #endif
    memset(dp,-1,sizeof(dp));
    int n,rta;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin >> value[i][j];
        }
    }
    dp[n-1][0]=value[n-1][0];
    dp[n-1][1]=value[n-1][1];
    dp[n-1][2]=value[n-1][2];
    for(int i=0;i<3;i++){
        happy(0,i);
    }
    rta=max(dp[0][0],dp[0][1]);
    rta=max(rta,dp[0][2]);
    cout << rta << endl;
    return 0;
}

