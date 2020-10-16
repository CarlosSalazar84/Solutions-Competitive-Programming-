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
        int n,rta=0;
        string s;
        cin >> n;
        cin >> s;
        vector<char> cadena;
        string built;
        char temp;
        for(int j=0;j<n;j++){
            temp=s[j];
            if(!cadena.empty() && cadena.back()=='(' && temp==')')
                cadena.pob;
            else cadena.pb(temp);
        }
        rta=cadena.size()/2;
        cout << rta << endl;
    }
    return 0;
}
