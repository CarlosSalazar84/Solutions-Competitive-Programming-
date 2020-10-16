#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
typedef long long ll;

int main() {
    #ifndef LOCAL
        fastIO;
    #endif
    int n, c; cin >> n >> c;
    int cubos[n];
    int ans = 0;
    for(int i = 0; i<n; i++){
      cin >> cubos[i];
    }
    sort(cubos, cubos+n);
    int i = 0;
    for(int j=n-1;j>=i;j--){
        if(i==j);
        else if(cubos[i] + cubos[j] <= c) i++;
        ans++;
    }
    if(n == 1) ans = 1;
    cout << ans << endl;
}
