#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,mile=0,juice=0,temp;
        cin >> n;
        for(int j=0;j<n;j++){
            cin >> temp;
            mile+=((temp/30)+1)*10;
            juice+=((temp/60)+1)*15;
        }
        if(mile<juice) cout << "Case " << i+1 << ": Mile " << mile << endl;
        else if(mile>juice) cout << "Case " << i+1 << ": Juice " << juice << endl;
        else cout << "Case " << i+1 << ": Mile Juice " << mile << endl;
    }
    return 0;
}
