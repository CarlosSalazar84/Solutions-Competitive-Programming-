#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'

const int MAX=21;
int oo=10000000;
long long peso[MAX];
long long valor[MAX];
long long p;
int n;

long long tamanio(int i,long long k){
        if(i==n) return 0;
        long long a = tamanio(i+1,k);
        long long b = -oo;
        if(peso[i]<=k) b = tamanio(i+1,k-peso[i])+valor[i];
        return max(a, b);
}

int main() {
    int t;
    long long rta;
    cin >> t;
    for(int j=0;j<t;j++){
        cin >> n >> p;
        for(int h=0;h<n;h++){
            cin >> peso[h];
        }
        for(int h=0;h<n;h++){
            cin >> valor[h];
        }
        rta=tamanio(0,p);
        cout << rta << endl;
    }
    return 0;
}
