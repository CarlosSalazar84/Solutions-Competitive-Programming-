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
        int n,c,l=1,r,m;
        cin >> n >> c;
        int cows[n];
        for(int j=0;j<n;j++){
            cin >> cows[j];
        }
        sort(cows,cows+n);
        r=cows[n-1]-1;
        while(r-l>1){
            m=(l+r)/2;
            bool go=true;
            for(int j=0,k=0;j<c-1;j++){
                k=lower_bound(cows,cows+n,cows[k]+m)-cows;
                if(k==n) {go=false;break;}
            }
            if(!go) r=m-1;
            else l=m;
        }
        bool go=true;
        for(int j=0,k=0;j<c-1;j++){
            k=lower_bound(cows,cows+n,cows[k]+r)-cows;
            if(k==n) {go=false;break;}
        }
        if(go) l=r;
        cout << l << endl;
    }
    return 0;
}

