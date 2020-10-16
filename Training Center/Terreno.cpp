#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n,m,b,t,area;
    while(cin >> n >> m){
        t=1;
        char a[n][m];
        set<int> prueba;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> a[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                for(int k=2;k<m-j+1;k++){
                    int g[123]={};
                    b=0;
                    for(int y=i;y<i+k;y++){
                        for(int x=j;x<j+k;x++){
                            g[a[y][x]]=1;
                        }
                    }
                    for(int y=48;y<123;y++){
                        if(g[y]==1)b++;
                    }
                    if(b==1 && t<k)t=k;
                }
            }
        }
        area=t*t;
        cout << area << endl;
    }
    return 0;
}
