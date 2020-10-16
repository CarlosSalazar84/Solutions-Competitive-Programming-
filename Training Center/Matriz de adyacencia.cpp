#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int a,b,temp1,temp2;
        cin >> a >> b;
        int mAdyacencia[a][a];
        memset(mAdyacencia,0,sizeof(mAdyacencia));
        for(int j=0;j<b;j++){
            cin >> temp1 >> temp2;
            mAdyacencia[temp1-1][temp2-1]++;
            mAdyacencia[temp2-1][temp1-1]++;
        }
        for(int j=0;j<a;j++){
            for(int k=0;k<a;k++){
                cout << mAdyacencia[j][k];
            }
            cout << endl;
        }
    }
    return 0;
}
