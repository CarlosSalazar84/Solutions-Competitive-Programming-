#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,indice=0;
        bool invalido=false;
        cin >> n;
        int b[n];
        int temp[2*n];
        int a[n];
        int rta[n];
        memset(rta,-1,sizeof(rta));
        for(int j=0;j<n;j++){
            cin >> b[j];
        }
        for(int j=0;j<(n*2);j++){
            temp[j]=j+1;
        }
        for(int j=0;j<n;j++){
            for(int k=0;k<(n*2);k++){
                if(b[j]==temp[k]){
                    temp[k]=0;
                    break;
                }

            }
        }
        for(int j=0;j<(n*2);j++){
            if(temp[j]!=0){
                a[indice]=temp[j];
                indice++;
            }
        }
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(b[j]<a[k]){
                    rta[j]=a[k];
                    a[k]=0;
                    break;
                }
            }
            if(rta[j]==-1) invalido=true;
        }
        if(invalido){
            cout << -1;
        }
        else{
            for(int j=0;j<n;j++){
                if(j==0) cout << b[j] << " " << rta[j];
                else cout << " " << b[j] << " " << rta[j];
            }
        }
        cout << endl;
    }
    return 0;
}
