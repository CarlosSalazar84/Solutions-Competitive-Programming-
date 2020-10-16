#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,temp,mayor=0,indice,rta;
        cin >> n;
        int habilidades[n+1];
        set<int> diferentes;
        memset(habilidades,0,sizeof(habilidades));
        for(int j=0;j<n;j++){
            cin >> temp;
            habilidades[temp]++;
            diferentes.insert(temp);
        }
        for(int j=1;j<n+1;j++){
            if(habilidades[j]>mayor){
                mayor=habilidades[j];
                indice=j;
            }
        }
        diferentes.erase(indice);
        if(diferentes.size()+2<=mayor){
                diferentes.insert(indice);
                mayor--;
        }
        rta=min((int)diferentes.size(),mayor);
        cout << rta << endl;
    }
    return 0;
}
