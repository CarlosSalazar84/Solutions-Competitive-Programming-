#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
//typedef long long ll;

int main() {
    #ifndef LOCAL
        fastIO;
    #endif
    unsigned long long entrada;
    string s,rta="";
    cin >> entrada;
    s = to_string(entrada);
    int n=s.size();
    rta=string(n,'0');
    if(n>1 && s[1]>='5'){
        if(s[0]-'0'==9){
            rta+='0';
            rta[0]='1';
        }
        else{
            rta[0]=char(s[0]+1);
        }
    }
    else rta[0]=char(s[0]);
    cout << rta << endl;
    return 0;
}
