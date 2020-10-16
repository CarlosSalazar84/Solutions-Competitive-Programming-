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
    for(int i=0;i<t;i++){
        int n,k,minimo,maximo;
        cin >> n >> k;
        vector<pii> intervalosResta;
        ll rta;
        pii intervaloSuma={2,2*k};
        int elementos[n];
        for(int j=0;j<n;j++){
            cin >> elementos[j];
        }
        for(int j=0;j<n/2;j++){
            intervalosResta.push_back({elementos[j]+elementos[n-j-1],elementos[j]+elementos[n-j-1]});
            maximo=max(elementos[j],elementos[n-j-1]);
            minimo=min(elementos[j],elementos[n-j-1]);
            intervalosResta.push_back({minimo+1,maximo+k});
        }
        ll operaciones[(k*2)+2];
        memset(operaciones,0,sizeof(operaciones));
        operaciones[intervaloSuma.ft]+=n;
        operaciones[(intervaloSuma.sd)+1]-=n;
        for(int j=0;j<intervalosResta.size();j++){
            operaciones[intervalosResta[j].ft]-=1;
            operaciones[(intervalosResta[j].sd)+1]+=1;
        }
        for(int j=2;j<2*k+2;j++){
            operaciones[j]+=operaciones[j-1];
        }
        rta=operaciones[2];
        for(int j=3;j<2*k+1;j++){
            if(operaciones[j]<rta) rta=operaciones[j];
        }
        cout << rta << endl;
    }
    return 0;
}
