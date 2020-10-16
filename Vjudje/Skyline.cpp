#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

const int MAX=1e5+3;
int plano[MAX][MAX];

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        memset(plano,0,sizeof(plano));
        int n,xMax=0,xMin=100000,yMax=0,xo,xf,y,inutil,rta=0;
        cin >> n;
        for(int j=0;j<n;j++){
            cin >> xo >> xf >> y >> inutil;
            if(xo<xMin) xMin=xo;
            if(xf>xMax) xMax=xf;
            if(y>yMax) yMax=y;
            for(int k=0;k<y;k++){
                for(int l=xo;l<xf+1;l++){
                    plano[k][l]++;
                }
            }
        }
        for(int j=0;j<yMax;j++){
            for(int k=xMin;k<xMax+1;k++){
                if(plano[j][k]>1) rta++;
            }
        }
        cout << rta << endl;
    }
    return 0;
}
