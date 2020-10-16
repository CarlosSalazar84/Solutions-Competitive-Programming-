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
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<char,char> pcc;
typedef pair<double,double> pdd;
typedef pair<long long,long long> pll;
// scanf("%d %d %d %d",&w,&b,&d,&s); %lld
// printf("%d\n" ,points);
// const double PI=acos(-1);

const int mod = 1e8+7;
ll dp[53][1005][23];
int a[53], c[53];
int n, k;

int calculate(int i, int j, int m){
    if(i == n || j > k || m > c[i]) return 0;
    if(j == k) return 1;
    if(dp[i][j][m] != -1) return dp[i][j][m];
    dp[i][j][m] = (calculate(i+1, j, 0) + calculate(i, j+a[i], m+1))%mod;
    return dp[i][j][m];
}


int main(){
    fastIO;
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        memset(dp, -1, sizeof(dp));
        cin >> n >> k;
        for(int j = 0; j < n; j++){
            cin >> a[j];
        }
        for(int j = 0; j < n; j++){
            cin >> c[j];
        }
        calculate(0,0,0);
        cout << "Case " << i << ": " << dp[0][0][0] << endl;
    }
    return 0;
}
