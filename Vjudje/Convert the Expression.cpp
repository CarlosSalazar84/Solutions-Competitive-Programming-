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
    for(int i=0;i<t;i++){
        string s,rta,aux;
        int lim;
        cin >> s;
        bool p1=true,p2=true;
        while(p1 && p2){
            p1=false;
            p2=false;
            lim=s.size();
            for(int j=0;j<lim;j++){
                if(s[j]=='(') p1=true;
                if(s[j]==')') p2=true;
            }
        }
    }
    return 0;
}

