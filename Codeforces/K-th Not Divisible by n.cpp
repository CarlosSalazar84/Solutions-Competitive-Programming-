#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define ft first
#define sd second
typedef long long ll;
typedef pair<int,int> pii;

int main() {
    #ifndef LOCAL
        fastIO;
    #endif
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        ll n,k,block,residuo,rta;
        cin >> n >> k;
        block=k/(n-1);
        residuo=k%(n-1);
        rta=block*n;
        if(residuo==0) rta--;
        else rta+=residuo;
        cout << rta << endl;
    }
    return 0;
}
