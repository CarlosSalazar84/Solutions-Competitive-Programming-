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
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int x,y,n;
        cin >> x >> y >> n;
        if(n%x>y){
            n-=(n%x)-y;
            cout << n << endl;
        }
        else if(n%x<y){
            n-=n%x;
            if(n%x==y) cout << n << endl;
            else{
                n-=(x-y);
                cout << n << endl;
            }
        }
        else cout << n << endl;
    }
    return 0;
}
