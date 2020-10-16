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
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<char,char> pcc;
typedef pair<long long,long long> pll;

int main(){
    fastIO;
    int t;
    cin >> t;
    for(int x=0;x<t;x++){
        string a,b;
        cin >> a >> b;
        if(a==b) cout << 1 << endl;
        else if(a.size()!=b.size()) cout << 3 << endl;
        else{
            int lim=a.size(),aux,ctr=0;
            for(int i=0;i<lim;i++){
                aux=abs(a[i]-b[i]);
                if((aux>-1 && aux<2) || (aux>7 && aux<11)){
                    ctr++;
                }
            }
            if(ctr==lim) cout << 2 << endl;
            else cout << 3 << endl;
        }
    }
    return 0;
}
