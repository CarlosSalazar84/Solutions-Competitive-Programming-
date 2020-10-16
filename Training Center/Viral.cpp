#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

string comprobarJuego(vector<char> &l){
    vector<char> l2;
    for(int i=0;i<l.size();i++){
        if(i<(int)l.size()-2 && l[i]==l[i+1] && l[i]==l[i+2]){
            i+=2;
        }else{
            l2.push_back(l[i]);
        }
    }
    if(l2.empty()) return "SI";
    if(l.size()==l2.size()) return "NO";
    return comprobarJuego(l2);
}

int main() {
    string s,rta;
    while(cin >> s){
        vector<char> letras;
        for(int i=0;i<s.size();i++){
            letras.push_back(s[i]);
        }
        rta=comprobarJuego(letras);
        cout << rta << endl;
    }
    return 0;
}
