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

const int MAX=1e3+5;
const int oo= 1e18;
ll dp[MAX][MAX];
int data[MAX],values[MAX];
int n,k;

ll calculate(int i,int j){
    if(j==k) return 0;
    if(i==n-k+j+1) return -oo;
    if(dp[i][j]!=-1) return dp[i][j];
    dp[i][j]=max(calculate(i+1,j),calculate(i+1,j+1)+1LL*data[i]*values[j]);
    return dp[i][j];
}

int main(){
    memset(dp,-1,sizeof(dp));
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> data[i];
    }
    for(int i=0;i<k;i++){
        cin >> values[i];
    }
    calculate(0,0);
    cout << dp[0][0] << endl;
    return 0;
}
