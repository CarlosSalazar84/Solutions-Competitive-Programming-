#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

const int MAX=1003;
int dp[MAX][MAX];
int precios[MAX];
int valores[MAX];
int n;

int miltonxd(int i,int dinero){
    if(i>=n) return 0;
    if(precios[i]>dinero) return miltonxd(i+1,dinero);
    if(dp[i][dinero]!=-1) return dp[i][dinero];
    dp[i][dinero]=max(miltonxd(i+1,dinero),miltonxd(i+1,dinero-precios[i])+valores[i]);
    return dp[i][dinero];
}

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        memset(dp,-1,sizeof(dp));
        n=0;
        int m,estanterias,indicePrecios=0,indiceValores=0,rta;
        cin >> m >> estanterias;
        for(int j=0;j<estanterias;j++){
            int libros;
            cin >> libros;
            for(int k=0;k<libros;k++){
                cin >> precios[indicePrecios];
                indicePrecios++;
                n++;
            }
            for(int k=0;k<libros;k++){
                cin >> valores[indiceValores];
                indiceValores++;
            }
        }
        rta=miltonxd(0,m);
        cout << rta << endl;
    }
    return 0;
}
