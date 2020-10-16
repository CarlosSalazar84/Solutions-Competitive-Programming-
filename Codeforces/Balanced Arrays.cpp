#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
typedef long long ll;

int main() {
    #ifndef LOCAL
        fastIO;
    #endif
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        if((n/2)%2==1) cout << "NO" << endl;
        else{
            ll arreglo[n];
            arreglo[0]=2;
            arreglo[(n/2)]=1;
            for(int j=1;j<(n/2);j++){
                if(j%2==1){
                    arreglo[j]=arreglo[j-1]+2;
                    arreglo[(n/2)+j]=arreglo[(n/2)+j-1]+4;
                }
                else{
                    arreglo[j]=arreglo[j-1]+4;
                    arreglo[(n/2)+j]=arreglo[(n/2)+j-1]+2;
                }
            }
            cout << "YES" << endl;
            for(auto &x:arreglo){
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
