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
    int y,n;
    while(cin >> y){
        cin >> n;
        int rta=0,l,r,temp;
        int fechas[n];
        for(int i=0;i<n;i++){
            cin >> fechas[i];
        }
        for(int i=0;i<n-1;i++){
            temp=lower_bound(fechas,fechas+n,fechas[i]+y)-fechas;
            temp--;
            if(temp-i>rta){
                rta=temp-i;
                l=i;
                r=temp;
            }
        }
        rta++;
        cout << rta << " " << fechas[l] << " " << fechas[r] << endl;
    }
    return 0;
}

