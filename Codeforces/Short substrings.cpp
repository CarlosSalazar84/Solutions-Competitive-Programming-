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
    string s;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> s;
        int lim;
        string rta="";
        lim=s.size();
        for(int j=0;j<lim;j+=2){
            rta+=s[j];
            if(j+1==lim-1) rta+=s[j+1];
        }
        cout << rta << endl;
    }
    return 0;
}

