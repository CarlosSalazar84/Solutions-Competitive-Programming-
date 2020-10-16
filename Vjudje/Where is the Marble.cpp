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
    int n,q,ctr=1;
    while(cin >> n){
        cin >> q;
        if(n==0 && q==0) break;
        int temp;
        vector<int> data;
        vector<int> consultas;
        for(int i=0;i<n;i++){
            cin >> temp;
            data.pb(temp);
        }
        for(int i=0;i<q;i++){
            cin >> temp;
            consultas.pb(temp);
        }
        sort(data.begin(),data.end());
        cout << "CASE# " << ctr << ":" << endl;
        for(auto &x:consultas){
            temp=lower_bound(data.begin(),data.end(),x)-data.begin();
            if(temp!=n && data[temp]==x) cout << x << " found at " << temp+1 << endl;
            else cout << x << " not found" << endl;
        }
        ctr++;
    }
    return 0;
}

