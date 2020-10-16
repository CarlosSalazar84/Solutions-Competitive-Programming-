#include<bits/stdc++.h>
using namespace std;

const int MAX=1e5+5;
int dp[MAX];

int tribonacci(int n){
    if(n<1) return 0;
    if(dp[n]!=-1) return dp[n];
    else{
        dp[n]=(((tribonacci(n-1)+tribonacci(n-2))%1000000007)+tribonacci(n-3))%1000000007;
        return dp[n];
    }
}

int main(){
    memset(dp,-1,sizeof(dp));
    int rta,t;
    dp[1]=0;
    dp[2]=0;
    dp[3]=1;
    while(cin >> t){
        rta=tribonacci(t);
        cout << rta << endl;
    }
    return 0;
}

