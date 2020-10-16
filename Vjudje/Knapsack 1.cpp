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

const int MAX = 1e5+4;
ll dp[102][MAX];

int main(){
    fastIO;
    int n, w;
    cin >> n >> w;
    int weights[n], values[n];
    for(int i = 0; i < n; i++){
        cin >> weights[i] >> values[i];
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= w; j++){
            dp[i][j] = dp[i-1][j];
            if(j-weights[i-1] > -1){
                dp[i][j] = max(dp[i][j], dp[i-1][j-weights[i-1]]+values[i-1]);
            }
        }
    }
    cout << dp[n][w] << endl;
    return 0;
}
