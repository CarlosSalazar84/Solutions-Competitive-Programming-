#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,m;
        cin >> n >> m;
        char matriz[n][m];
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                matriz[j][k]='B';
            }
        }
        if(n==2){
            for(int j=0;j<n;j++){
                for(int k=0;k<m-1;k++){
                    if(j%2==0 && k%2==0) matriz[k][j]='W';
                    if(j%2==1 && k%2==1) matriz[k][j]='W';
                }
            }
        }else if(m==2){
            for(int j=0;j<m;j++){
                for(int k=0;k<n-1;k++){
                    if(j%2==0 && k%2==1) matriz[k][j]='W';
                    if(j%2==1 && k%2==0) matriz[k][j]='W';
                }
            }
        }else{
            matriz[0][0]='W';
            matriz[1][0]='W';
            matriz[1][1]='W';
        }
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                cout << matriz[j][k];
            }
            cout << endl;
        }
    }
    return 0;
}
