#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n,m,b,c,index1, index2,d;
    while(cin >> n >> m){
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        for(int i=0;i<m;i++){
            cin >> b >> c;
            index1 = lower_bound(a,a+n,b)-a;
            index2 = upper_bound(a,a+n,c)-a;
            d=index2-index1;
            cout << d << '\n';
        }
    }
    return 0;
}
