#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define ft first
#define sd second
typedef long long ll;
typedef pair<int,int> pii;

int main() {
    #ifndef LOCAL
        fastIO;
    #endif
    int subcadenaMenor=1000000,carry=1;
    char temp;
    string s,comprobar1="",inverso;
    vector<int> comprobar2;
    bool valido1,valido2=true;
    cin >> s;
    temp=s[0];
    for(int i=1;i<s.size();i++){
        if(temp!=s[i]){
            comprobar1+=temp;
            comprobar2.push_back(carry);
            carry=1;
            temp=s[i];
        }
        else carry++;
    }
    comprobar1+=temp;
    comprobar2.push_back(carry);
    inverso=comprobar1;
    reverse(inverso.begin(),inverso.end());
    valido1=inverso==comprobar1;
    if(valido1){
        for(int i=0;i<(comprobar2.size()/2)+1;i++){
            if(comprobar2[i]==1){
                if(comprobar2[i]==comprobar2[comprobar2.size()-1-i]){
                    valido2=false;
                    break;
                }
            }
        }
        if(valido2) cout << comprobar2[comprobar2.size()/2]+1 << endl;
        else cout << 0 << endl;
    }
    else cout << 0 << endl;
}
