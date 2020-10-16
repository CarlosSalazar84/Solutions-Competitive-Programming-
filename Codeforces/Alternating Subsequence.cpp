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
        int n;
        ll temp;
        ll rta=0;
        cin >> n;
        ll elementos[n];
        for(int j=0;j<n;j++){
            cin >> elementos[j];
        }
        temp=elementos[0];
        for(int j=1;j<n;j++){
            if(elementos[j]*elementos[j-1]>0){
                temp=max(temp,elementos[j]);
            }
            else{
                rta+=temp;
                temp=elementos[j];
            }
        }
        rta+=temp;
        cout << rta << endl;
    }
    return 0;
}
