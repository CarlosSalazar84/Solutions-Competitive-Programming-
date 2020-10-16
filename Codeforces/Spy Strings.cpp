#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define ft first
#define sd second
#define pb push_back
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
        int n,m,ctr=0;
        char save;
        bool accepted;
        cin >> n >> m;
        string cadenas[n],rta;
        for(int j=0;j<n;j++){
            cin >> cadenas[j];
        }
        rta=cadenas[0];
        for(int j=0;j<m;j++){
            accepted=true;
            save=rta[j];
            char letra=char('a'-1);
            for(int k=0;k<26;k++){
                letra++;
                rta[j]=letra;
                for(int l=0;l<n;l++){
                    for(int x=0;x<m;x++){
                            if(rta[x]!=cadenas[l][x]) ctr++;
                    }
                    if(ctr>1){
                        accepted=false;
                        l=n;
                    }
                    ctr=0;
                }
                if(accepted){
                    j=m;
                    k=26;
                }
                else{
                    if(k<25) accepted=true;
                }
            }
            if(!accepted) rta[j]=save;
        }
        if(accepted) cout << rta << endl;
        else cout << -1 << endl;
    }
    return 0;
}

