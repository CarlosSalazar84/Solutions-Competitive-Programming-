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

const int MAX = 18;
int n;
bool ok;
int degrees[MAX];

void solve(int i,int d){
    if(i==n){
        if((d+360)%360==0) ok = true;
        return;
    }
    solve(i+1,d+degrees[i]);
    solve(i+1,d-degrees[i]);
}

int main() {
    fastIO;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> degrees[i];
    }
    solve(0,0);
    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

