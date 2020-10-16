#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
typedef long long ll;

int main() {
    #ifndef LOCAL
        fastIO;
    #endif
    ll temp=1;
    ll par=2;
    vector<ll> exponentes;
    exponentes.push_back(temp);
    while(par+temp<1e9){
        temp=par+temp;
        exponentes.push_back(temp);
        par*=2;
    }
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,x;
        cin >> n;
        for(int j=1;j<exponentes.size();j++){
            if(n%(int)exponentes[j]==0){
                x=n/exponentes[j];
                break;
            }
        }
        cout << x << endl;
    }
    return 0;
}
