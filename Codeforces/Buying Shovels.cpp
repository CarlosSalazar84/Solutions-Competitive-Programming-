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

vector<int> calcularDivisores(int n){
    vector<int> divisores;
    int raiz=sqrt(n);
    for(int i=1;i<=raiz;i++){
        if(n%i==0) divisores.pb(i);
        if(n%i==0 && n/i!=i) divisores.pb(n/i);
    }
    return divisores;
}

int main() {
    #ifndef LOCAL
    fastIO;
    #endif
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,k,indice;
        cin >> n >> k;
        vector<int> divisores=calcularDivisores(n);
        sort(divisores.begin(),divisores.end());
        indice=upper_bound(divisores.begin(),divisores.end(),k)-divisores.begin();
        cout << n/divisores[indice-1] << endl;
    }
    return 0;
}

