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
    string s,rta;
    cin >> s;
    bool go=true;
    int lim,temp;
    while(go){
        rta="";
        sort(s.rbegin(),s.rend());
        go=false;
        lim=s.size();
        for(int j=0;j<lim;j++){
            if(s[j]==s[j+1] && s[j]!='z'){
                    go=true;
                    rta+=char(s[j]+1);
                    j++;
            }
            else{
                rta+=s[j];
            }
        }
        s=rta;
    }
    cout << rta << endl;
    return 0;
}

