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
        int n;
        bool accepted=true;
        cin >> n;
        string field[n];
        for(int j=0;j<n;j++){
            cin >> field[j];
        }
        for(int j=n-2;j>=0;j--){
            for(int k=n-2;k>=0;k--){
                if(field[j][k]=='1' && field[j][k+1]=='0' && field[j+1][k]=='0'){
                    accepted=false;
                    j=-1;
                    k=-1;
                }
            }
        }
        if(accepted) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
