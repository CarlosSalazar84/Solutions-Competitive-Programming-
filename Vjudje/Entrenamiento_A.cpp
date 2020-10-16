#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int a,b,x,y,caso1,caso2,caso3,caso4,rta;
        cin >> a >> b >> x >> y;
        x++;
        y++;
        caso1=(a-x)*b;
        caso2=(x-1)*b;
        caso3=(b-y)*a;
        caso4=(y-1)*a;
        rta=max({caso1,caso2,caso3,caso4});
        cout << rta << endl;
    }
    return 0;
}
