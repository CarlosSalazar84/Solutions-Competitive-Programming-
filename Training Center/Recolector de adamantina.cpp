#include<bits/stdc++.h>
using namespace std;

const int MAX=105;
int dp[MAX][MAX];
int n,m;
int cueva[MAX][MAX];

int adamantina(int x,int y){
    if(x>n || y>m) return 0;
    if(x==n || y==m) return cueva[n][m];;
    if(dp[x][y]!=-1) return dp[x][y];
    else{
        dp[x][y]=max(adamantina(x+1,y),adamantina(x,y+1))+cueva[x][y];
        return dp[x][y];
    }
}

int main(){
    int t,rta;
    cin >> t;
    for(int i=0;i<t;i++){
        memset(dp,-1,sizeof(dp));
        cin >> n >> m;
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                cin >> cueva[j][k];
            }
        }
        dp[n][m]=cueva[n][m];
        rta=adamantina(0,0);
        cout << rta << endl;
    }
    return 0;
}

