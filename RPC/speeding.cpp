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
    int n,rta=0,aux;
    cin >> n;
    int pos[n];
    int temp[n];
    for(int i=0;i<n;i++){
        cin >> temp[i] >> pos[i];
    }
    int lim=n-1;
    for(int i=0;i<lim;i++){
        aux=(pos[i+1]-pos[i])/(temp[i+1]-temp[i]);
        if(aux>rta) rta=aux;
    }
    cout << rta << endl;
    return 0;
}
