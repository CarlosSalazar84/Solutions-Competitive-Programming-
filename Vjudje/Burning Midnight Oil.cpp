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
    fastIO;
    int n, k;
    cin >> n >> k;

    int l = 1, r = n, m, sum, aux;
    while(l!=r){
        m = (l+r)/2;
        sum = m, aux = m;
        while(aux){
            aux /= k;
            sum += aux;
        }
        if(sum < n) l = m+1;
        else r = m;
    }
    cout << l << endl;
    return 0;
}

