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
int dif[MAX];
int n,l,r,x,out;

void solve(int i,vector<int> &aux,int Min,int Max,int d,bool y){
    if(aux.size()>1 && d>=l && d<=r && Max-Min>=x && y){
        out++;
    }
    if(i==n) return;
    aux.pb(dif[i]);
    solve(i+1,aux,min(Min,dif[i]),max(Max,dif[i]),d+dif[i],1);
    aux.pob;
    solve(i+1,aux,Min,Max,d,0);
}

int main() {
    fastIO;
    vector<int> in;
    cin >> n >> l >> r >> x;
    for(int i = 0; i < n; i++){
        cin >> dif[i];
    }
    solve(0,in,2e9,0,0,0);
    cout << out << endl;
    return 0;
}

