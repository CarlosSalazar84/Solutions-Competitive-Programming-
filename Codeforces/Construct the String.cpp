#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,a,b,ctr=0;
        bool seguir=true;
        cin >> n >> a >> b;
        string s= "";
        while(seguir){
            for(int k=0;k<b;k++){
                if(ctr==n){
                    seguir=false;
                    break;
                }
                s+=char(97+k);
                ctr++;
            }
        }
        cout << s << endl;
    }
    return 0;
}
