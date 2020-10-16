#include<bits/stdc++.h>
using namespace std;

const int MAX=5e5+3;
const int oo=100000000;
int dp[MAX];

int costura(int x,int y, int z){
    if(x<0) return oo;
    if(dp[x]!=-1) return dp[x];
    dp[x]= min(x,costura(x-y,y,z));
    dp[x]= min(dp[x],costura(x-z,y,z));
    return dp[x];
}

int main(){
    int t,c,s,rta;
    while(cin>>t>>c>>s){
        memset(dp,-1,sizeof(dp));
        rta=costura(t,c,s);
        cout << rta << endl;
    }
    return 0;
}
