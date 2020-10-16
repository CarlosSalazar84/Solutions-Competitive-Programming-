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
    int n,black,white;
    bool valido=true;;
    cin >> n;
    string cadenas[n];
    for(int i=0;i<n;i++){
       cin >> cadenas[i];
    }
    for(int i=0;i<n;i++){
        black=0;
        white=0;
        for(int j=0;j<n;j++){
            if(j>1 && cadenas[i][j-2]==cadenas[i][j-1] && cadenas[i][j-1]==cadenas[i][j])
                   {valido=false;i=n;break;}
            if(cadenas[i][j]=='B') black++;
            else white++;
        }
        if(black!=white) {valido=false;break;}
    }
    for(int i=0;i<n;i++){
        black=0;
        white=0;
        for(int j=0;j<n;j++){
            if(j>1 && cadenas[j-2][i]==cadenas[j-1][i] && cadenas[j-1][i]==cadenas[j][i])
                   {valido=false;i=n;break;}
            if(cadenas[j][i]=='B') black++;
            else white++;
        }
        if(black!=white) {valido=false;break;}
    }
    cout << valido << endl;
    return 0;
}
