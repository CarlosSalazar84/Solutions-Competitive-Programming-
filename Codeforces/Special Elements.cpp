#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define ft first
#define sd second
typedef long long ll;
typedef pair<int,int> pii;

int main() {
    #ifndef LOCAL
        fastIO;
    #endif
    int t;
    cin >> t;
    bool posibles[8001];
    for(int i=0;i<t;i++){
        memset(posibles,0,sizeof(posibles));
        int n,sumas=0,contador=0;
        cin >> n;
        int numeros[n];
        for(int j=0;j<n;j++){
            cin >> numeros[j];
        }
        for(int j=0;j<n-1;j++){
            for(int k=j;k<n;k++){
                if(k==j) sumas+=numeros[k];
                else{
                    sumas+=numeros[k];
                    if(sumas<8001) posibles[sumas]=true;
                }
            }
            sumas=0;
        }
        for(int j=0;j<n;j++){
            if(posibles[numeros[j]]) contador++;
        }
        cout << contador << endl;
    }
    return 0;
}
