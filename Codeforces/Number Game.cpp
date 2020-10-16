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
    set<int> potencias;
    potencias.insert(1);
    for(int i=4;i<1e9;i*=2){
        potencias.insert(i);
        //cout << i << endl;
    }
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        if(potencias.count(n)) cout << "FastestFinger" << endl;
        else if(n!=2 && n%2==0 && (n/2)%2==1) cout << "FastestFinger" << endl;
        else cout << "Ashishgup" << endl;
    }
    return 0;
}

