#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define ft first
#define sd second
#define pb push_back
#define pob pop_back()
#define pf push_front
#define pof pop_front()
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<char,char> pcc;
typedef pair<long long,long long> pll;

int main() {
    #ifndef LOCAL
    fastIO;
    #endif
    int n;
    while(cin >> n){
        if(n==0) break;
        bool ac=true;
        int a,b;
        vector<int> A;
        vector<int> B;
        for(int i=0;i<n;i++){
            cin >> a >> b;
            A.pb(a);
            B.pb(b);
        }
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        for(int i=0;i<n;i++){
            if(A[i]!=B[i]){
                ac=false;
                break;
            }
        }
        if(ac) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

