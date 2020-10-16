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

const int MAX=100005;
const int oo=100000;
int alturas[MAX];
int dp[MAX];
int n;

int distancia(int i){
    if(i<0) return oo;
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];
    dp[i]=min(distancia(i-1)+abs(alturas[i]-alturas[i-1]),distancia(i-2)+abs(alturas[i]-alturas[i-2]));
    return dp[i];
}

int main() {
    #ifndef LOCAL
    fastIO;
    #endif
    memset(dp,-1,sizeof(dp));
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> alturas[i];
    }
    cout << distancia(n-1) << endl;
    return 0;
}

