#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int a,b,p,rta;
        long long temp=0;
        cin >> a >> b >>p;
        string s;
        cin >> s;
        reverse(s.begin(),s.end());
        int tamanio=s.size();
        long long dinero[tamanio];
        dinero[0]=0;
        for(int j=1;j<tamanio;j++){
            if(s[j]=='A'){
                temp+=a;
                dinero[j]=temp;
                while(j+1<tamanio && s[j+1]=='A'){
                    dinero[j+1]=temp;
                    j++;
                }
            }
            else{
                temp+=b;
                dinero[j]=temp;
                while(j+1<tamanio && s[j+1]=='B'){
                    dinero[j+1]=temp;
                    j++;
                }
            }
        }
        int index = upper_bound(dinero,dinero+tamanio,p)-dinero;
        rta=tamanio-(index-1);
        if(rta>tamanio) cout << tamanio << endl;
        else cout << rta << endl;
    }
    return 0;
}
