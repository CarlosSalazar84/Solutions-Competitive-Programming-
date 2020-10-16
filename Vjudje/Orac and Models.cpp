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
typedef pair<pii,int> piii;
typedef pair<char,char> pcc;
typedef pair<double,double> pdd;
typedef pair<long long,long long> pll;
// scanf("%d %d %d %d",&w,&b,&d,&s); %lld
// printf("%d\n" ,points);
// const double PI=acos(-1);

const int MAX = 1e5+4;
int numbers[MAX];

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, r, rta = 1;
        cin >> n;
        int dp[n+2];
        for(int i = 1; i <= n; i++){
            dp[i] = 1;
        }
        for(int i = 1; i <= n; i++){
            cin >> numbers[i];
        }

        for(int i = 2; i <= n; i++){
            for(int j = 1; j <= n/j; j++){
                if(i%j == 0){
                    if(numbers[j] < numbers[i]){
                        dp[i] = max(dp[i], dp[j]+1);
                    }
                    if(i/j != i && numbers[i/j] < numbers[i]){
                        dp[i] = max(dp[i], dp[i/j]+1);
                    }
                }
            }
        }
        for(int i = 1; i <= n; i++){
            rta = max(rta, dp[i]);
        }
        cout << rta << endl;
    }
    return 0;
}
