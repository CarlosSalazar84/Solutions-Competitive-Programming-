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
        int n,clientes;
        string nombre;
        cin >> n;
        map<string,int> programas;
        for(int j=0;j<n;j++){
            cin >> nombre >> clientes;
            programas[nombre]=clientes;
        }
        auto x=*programas.begin();
        cout << x.first << " = " << x.second << endl;
        x=*programas.rbegin();
        cout << x.first << " = " << x.second << endl;
    }
    return 0;
}
