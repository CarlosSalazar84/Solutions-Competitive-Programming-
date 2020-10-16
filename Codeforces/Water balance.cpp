#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define ft first
#define sd second
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<long long,int> pll;

int main() {
    #ifndef LOCAL
        fastIO;
    #endif
    int n,lectura;
    cin >> n;
    vector<pll> nuevaCadena;
    for(int i=0;i<n;i++){
        cin >> lectura;
        nuevaCadena.push_back({lectura,1});
        while(nuevaCadena.size()>1){
                pll extraccion=nuevaCadena.back();
                pll tope=nuevaCadena[nuevaCadena.size()-2];
                if(extraccion.ft*tope.sd<=tope.ft*extraccion.sd){
                    pll temp={extraccion.ft+tope.ft,extraccion.sd+tope.sd};
                    nuevaCadena.pop_back();
                    nuevaCadena.pop_back();
                    nuevaCadena.push_back(temp);
                }
                else{
                    break;
                }
        }
    }
    for(auto &x:nuevaCadena){
        for(int j=0;j<x.sd;j++){
            cout << fixed << setprecision(10) << double(x.ft)/x.sd << endl;
        }
    }
    return 0;
}
