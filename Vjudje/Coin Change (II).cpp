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

int main(){
    fastIO;
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int n, k;
        cin >> n >> k;
        int a[n];
        ll dp[k+2];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        for(int j = 0; j < n; j++){
            cin >> a[j];
        }
        for(int j = 0; j < n; j++){
            for(int l = 1; l <= k; l++){
                if(l - a[j] > -1){
                    dp[l] = (dp[l] + dp[l-a[j]])%mod;
                }
            }
        }
        cout << "Case " << i << ": " << dp[k] << endl;
    }
    return 0;
}
