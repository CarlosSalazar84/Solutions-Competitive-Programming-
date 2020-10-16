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
        int n,rta=0;
        bool vacio=true;
        string s;
        cin >> n >> k;
        cin >> s;
        for(int j=0;j<n;j++){
            if(s[j]=='1') vacio=false;
        }
        if(vacio) rta=n/(k+1);
        else{
            if(s[0]=='0'){
                int x=0,ctr=0;
                while(s[x]) ctr++;
                rta+=
            }
        }
        cout << rta << endl;
    }
    return 0;
}

