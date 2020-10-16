#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

set<char> letras;

string palabra(vector<string> &x,int tamanio){
    for(int i=0;i<x.size();i++){
        for(int j=0;j<x[i].size();j++){
            if(x[i][j]<'a') x[i][j]=(char)(x[i][j]+32);
        }
    }
    sort(x.begin(),x.end());
    int indice=(x.size()-1);
    for(int i=indice;i>=0;i--){
        if(x[i][0]<=(char)(tamanio+96) && letras.count(x[i][0])){
            letras.erase(x[i][0]);
            return x[i];
        }
    }
}

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,temp;
        string in,ingresar;
        vector<string> entradas,rta;
        cin >> n;
        for(int j=0;j<n;j++){
            letras.insert((char)('a'+j));
        }
        for(int j=0;j<n;j++){
            cin >> temp;
            for(int k=0;k<temp;k++){
                cin >> in;
                entradas.push_back(in);
            }
            ingresar=palabra(entradas,n);
            rta.push_back(ingresar);
            entradas.clear();
        }
        sort(rta.begin(),rta.end());
        for(int j=0;j<rta.size();j++){
            rta[j][0]=(char)(rta[j][0]-32);
        }
        cout << "Case #" << i+1 << ":" << endl;
        for(auto &x:rta){
            cout << x << endl;
        }
    }
    return 0;
}
