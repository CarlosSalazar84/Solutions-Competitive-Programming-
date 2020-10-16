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
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        bool ac=true;
        int lim;
        getline(cin,s);
        //cin >> s;
        lim=s.size();
        stack<char> inicio;
        for(int j=0;j<lim;j++){
            if(s[j]=='(' || s[j]=='[') inicio.push(s[j]);
            else{
                if(inicio.empty()) {ac=false;lim=j;}
                else if(s[j]==')' && inicio.top()=='['){ac=false;lim=j;}
                else if(s[j]==']' && inicio.top()=='('){ac=false;lim=j;}
                else inicio.pop();
            }
        }
        if(!inicio.empty()) ac=false;
        if(ac) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}

