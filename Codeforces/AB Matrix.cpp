#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define ft first
#define sd second
#define pb push_back
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<char,char> pcc;
typedef pair<long long,long long> pll;

int main() {
    #ifndef LOCAL
    fastIO;
    #endif
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,m,a,b,pos=0,desplazar;
        bool accepted;
        cin >> n >> m >> a >> b;
        accepted=(m*b==n*a);
        if(accepted){
            for(int j=1;j<=m;j++) {
                if(j*n%m==0){
                    desplazar=j;
                    j=m;
                }
            }
            bool rta[n][m]={};
            for(int j=0;j<n;j++){
                for(int k=pos;k<pos+a;k++){
                    rta[j][k%m]=true;
                }
                pos+=desplazar;
            }
            cout << "YES" << endl;
            for(int j=0;j<n;j++){
                for(int k=0;k<m;k++){
                    cout << rta[j][k];
                }
                cout << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}

