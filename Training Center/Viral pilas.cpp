#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

int main() {
    string s,rta;
    while(cin >> s){
        stack<char> letras;
        char temp1,temp2,temp3;
        for(int i=0;i<s.size();i++){
            letras.push(s[i]);
            if(letras.size()>=3){
                temp1=letras.top();
                letras.pop();
                temp2=letras.top();
                letras.pop();
                temp3=letras.top();
                letras.pop();
                if(temp1!=temp2 || temp1!=temp3 || temp2!=temp3){
                    letras.push(temp3);
                    letras.push(temp2);
                    letras.push(temp1);
                }
            }
        }
        if(letras.empty()) cout << "SI" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
