#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define ft first
#define sd second
#define pb push_back
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<char,char> pcc;
typedef pair<long long,long long> pll;

int main() {
    #ifndef LOCAL
    fastIO;
    #endif
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,p=0,ip=0,temp;
        cin >> n;
        for(int j=0;j<n;j++){
            cin >> temp;
            if(temp%2!=j%2){
                if(temp%2==0) p++;
                else ip++;
            }
            if(ip==p) cout << p << endl;
            else cout << -1 << endl;
        }
    }
    return 0;
}

