#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,x,ctr=1;
        cin >> n >> x;
        int entrada[n];
        set<int> posiciones;
        set<int> rta;
        for(int j=0;j<n;j++){
            cin >> entrada[j];
        }
        for(int j=0;j<n;j++){
            posiciones.insert(entrada[j]);
        }
        while(true){
            if(posiciones.count(ctr)) rta.insert(ctr);
            else{
                if(x>0) x--;
                else break;
                rta.insert(ctr);
            }
            ctr++;
        }
        cout << rta.size() << endl;
    }
    return 0;
}
