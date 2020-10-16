#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

int main() {
    int t,a,b,temp;
    cin >> t;
    for(int i=0;i<t;i++){
        int indice=0,rta=0;
        cin >> a >> b;
        int ciudades[b];
        memset(ciudades,0,sizeof(ciudades));
        temp=a/b;
        for(int j=0;j<b;j++){
            ciudades[j]+=temp;
        }
        temp=a%b;
        while(temp){
            ciudades[indice]++;
            indice++;
            temp--;
        }
        for(int j=0;j<b;j++){
            rta+=ciudades[j]-1;
        }
        cout << rta << endl;
    }
    return 0;
}
