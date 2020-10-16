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

const int MAX = 1000000;
bitset<MAX+1> marked;
vector<int> primes;
void sieve() {
    marked[0] = marked[1] = true;
    for (int i = 2; i <= MAX; i++) if (!marked[i]) {
        primes.push_back(i);
        for (ll j = 1ll*i*i; j <= MAX; j += i) marked[j] = true;
    }
}

int main(){
    sieve();
    int n,ctr=1;
    while(cin >> n){
        if(n==0) break;
        ll rta=0;
        int ind=lower_bound(primes.begin(),primes.end(), n)-primes.begin();
        ind--;
        cout << "Case " << ctr << ": ";
        if(ind>0){
            for(int i=0;i<ind;i++){
                while(i!=ind && primes[i]+primes[ind]>n) ind--;
                rta+=ind-i;
            }
            cout << rta << endl;
        }
        else cout << 0 << endl;
        ctr++;
    }
    return 0;
}
