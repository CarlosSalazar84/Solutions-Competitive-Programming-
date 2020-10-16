#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define ft first
#define sd second
#define pb push_back
#define pob pop_back()
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<char,char> pcc;
typedef pair<long long,long long> pll;

int main() {
    #ifndef LOCAL
    fastIO;
    #endif
    string s;
    vector<int> rta;
    int lim;
    cin >> s;
    lim=s.size();
    for(int i=0;i<lim;i++){
        if(i%2==0) rta.pb(s[i]-48);
    }
    sort(rta.begin(),rta.end());
    lim=rta.size();
    for(int i=0;i<lim;i++){
        if(i==lim-1) cout << rta[i] << endl;
        else cout << rta[i] << "+";
    }
    return 0;
}

