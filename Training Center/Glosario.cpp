#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
typedef long long ll;

int main() {
    #ifndef LOCAL
        fastIO;
    #endif
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        set<string> palabras;
        while(1){
            int m;
            string s;
            cin >> s;
            if(s=="FIN") break;
            while(1){
                m=s.size();
                bool comprobar=!(s[m-1]>64 && s[m-1]<91) && !(s[m-1]>96 && s[m-1]<123);
                if(comprobar) s.pop_back();
                else break;
            }
            palabras.insert(s);
        }
        for(auto &x:palabras){
            cout << x << endl;
        }
        cout << "-" << endl;
    }
    return 0;
}
