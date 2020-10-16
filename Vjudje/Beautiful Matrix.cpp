#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define ft first
#define sd second
#define pb push_back
#define pob pop_back()
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<char,char> pcc;
typedef pair<long long,long long> pll;

int main() {
    #ifndef LOCAL
    fastIO;
    #endif
    int matriz[5][5];
    int x,y,rta;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> matriz[i][j];
            if(matriz[i][j]==1){x=j+1;y=i+1;}
        }
    }
    rta=abs(3-x)+abs(3-y);
    cout << rta << endl;
    return 0;
}

