#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,rta;
        cin >> n;
        rta=n-((n/2)+1);
        cout << rta << endl;
    }
    return 0;
}
