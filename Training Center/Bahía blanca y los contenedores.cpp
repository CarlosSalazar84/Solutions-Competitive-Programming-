#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

int main() {
    string s;
    while(cin >> s){
        int n,rta,tamanio,ctr=0;
        char actual,temp;
        n=s.size();
        set<char> letras;
        for(int i=0;i<n;i++){
            letras.insert(s[i]);
        }
        tamanio=letras.size();
        vector<stack<char>> pilas(tamanio);
        for(int i=0;i<n;i++){
                actual=s[i];
            for(int j=0;j<tamanio;j++){
                if(pilas[j].empty()){
                    pilas[j].push(actual);
                    break;
                }
                temp=pilas[j].top();
                if(temp>=actual){
                    pilas[j].push(actual);
                    break;
                }
            }
        }
        for(int i=0;i<tamanio;i++){
            if(pilas[i].empty()){
                ctr++;
            }
        }
        rta=tamanio-ctr;
        cout << rta << endl;
    }
    return 0;
}
