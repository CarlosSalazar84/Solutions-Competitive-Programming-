#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define ft first
#define sd second
#define pb push_back
#define pob pop_back
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
        int n,k,longitud=0,puntero;
        map<char,int> cantidad;
        vector<int> orden;
        string s;
        cin >> n >> k;
        cin >> s;
        for(int j=0;j<n;j++){
            cantidad[s[j]]++;
        }
        for(auto &x:cantidad){
            orden.pb(x.sd);
        }
        sort(orden.begin(),orden.end());
        for(auto &x:orden){
            cout << x << " ";
        }
        cout << endl;
        for(int j=1;j<=n;j++){
            bool yes=true;
            string cadena=string(j,'-');
            int aux=__gcd(j,k);
            vector<int> temp=orden;
            for(int l=0;l<j;l++){
                puntero=l;
                if(cadena[puntero]=='-'){
                    while(puntero<j){
                        if(temp.back()==0){temp.pob();puntero=k;};
                        if(temp.empty()) {l=j;yes=false;break;}
                        else{
                            cadena[puntero]='*';
                            temp[temp.size()-1]--;
                            puntero+=aux;
                        }
                    }
                }
            }
            cout << cadena << " " << longitud << " " << yes << endl;
            if(yes && cadena.size()>longitud) longitud=cadena.size();
        }
        cout << longitud << endl;
    }
    return 0;
}

