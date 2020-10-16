#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

int main() {
    fastIO;
    int n,m;
    while(cin >> n >> m){
        long long deuda=0,amigo=0,temp,estado=0;
        amigo+=-m;
        for(int i=0;i<n;i++){
            cin >> temp;
            amigo+=temp;
            if(temp>=0){
                estado+=temp;
            }
            else if(estado+temp>=0 && estado>0 && temp<0){
                estado+=temp;
            }
            else if(estado+temp<0 && estado>0){
                deuda+=estado+temp;
                estado=0;
            }
            else if(estado+temp<0 && estado==0){
                deuda+=temp;
            }
        }
        if(amigo>=0) cout << -deuda << " " << 0 << endl;
        else cout << -deuda << " " << -amigo << endl;
    }
    return 0;
}
