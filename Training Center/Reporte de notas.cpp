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
        int n,codigo;
        double nota;
        string nombre;
        cin >> n;
        map<int,string> estudiantes;
        map<int,double> notas;
        for(int j=0;j<n;j++){
            cin >> nombre >> codigo;
            estudiantes[codigo]=nombre;
        }
        for(int j=0;j<n;j++){
            cin >> codigo >> nota;
            notas[codigo]=nota;
        }
        for(auto &x:notas){
            cout << estudiantes[x.first] << " " << fixed << setprecision(1) << x.second << endl;
        }
    }
    return 0;
}
