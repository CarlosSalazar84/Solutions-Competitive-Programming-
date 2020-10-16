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
typedef pair<long long,int> pll;

int main(){
    #ifndef LOCAL
        fastIO;
    #endif
    int n,k,inicio,lim;
    set<int> vistos;
    cin >> n >> k;
    int posiciones[n+1];
    int posInicial[k+1];
    int posFinal[k+1];
    vector<int> salida;
    posFinal[0]=200005;
    posInicial[0]=0;
    posiciones[0]=0;
    for(int i=1;i<=n;i++){
        cin >> posiciones[i];
        if(!vistos.count(posiciones[i])){
            posInicial[posiciones[i]]=i;
            vistos.insert(posiciones[i]);
        }
        posFinal[posiciones[i]]=i;
    }
    sort(posFinal,posFinal+k+1);
    for(int i=1;i<=n;i++){
        if(posInicial[i]<=posFinal[0]){
            inicio=posInicial[i];
            i=n+1;
        }
    }
    for(int i=inicio;i<=n;i++){
        if(vistos.empty()) i=n+1;
        else if(vistos.count(posiciones[i])){
              salida.pb(posiciones[i]);
              vistos.erase(posiciones[i]);
        }
    }
    lim=salida.size();
    for(int i=0;i<lim;i++){
        if(i==lim-1) cout << salida[i] << endl;
        else cout << salida[i] << " ";
    }
    return 0;
}
