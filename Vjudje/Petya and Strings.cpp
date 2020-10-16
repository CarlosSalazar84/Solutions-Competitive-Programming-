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
    int lim;
    string s1,s2;
    cin >> s1;
    cin >> s2;
    lim=s1.size();
    for(int i=0;i<lim;i++){
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
        if(s1[i]<s2[i]){
            cout << -1 << endl;
            break;
        }
        else if(s1[i]>s2[i]){
            cout << 1 << endl;
            break;
        }
        if(i==lim-1) cout << 0 << endl;
    }
    return 0;
}

