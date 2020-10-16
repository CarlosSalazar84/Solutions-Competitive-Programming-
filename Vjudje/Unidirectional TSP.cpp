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

const int H = 14;
const int V = 104;
int dp[H][V];
int value[H][V];
vector<int> path;
int n, m;

int calculate(int i, int j){
    if(j == m-1) return dp[i][j] = value[i][j];
    if(dp[i][j] != -1) return dp[i][j];
    dp[i][j] = calculate((i+n-1)%n, j+1);
    dp[i][j] = min(dp[i][j], calculate(i, j+1));
    dp[i][j] = min(dp[i][j], calculate((i+1)%n, j+1));
    dp[i][j] += value[i][j];
    return dp[i][j];
}

void rebuilt(int i, int j){
    path.pb(i+1);
    if(j < m){
        int aux;
        vector<pii> pos;
        pos.pb({dp[(i+n-1)%n][j+1], (i+n-1)%n});
        pos.pb({dp[i][j+1], i});
        pos.pb({dp[(i+1)%n][j+1], (i+1)%n});
        sort(pos.begin(), pos.end());
        aux = pos[0].sd;
        rebuilt(aux, j+1);
    }
}

int main(){
    while(cin >> n >> m){
        int rta = 1e9;
        memset(dp, -1, sizeof(dp));
        path.clear();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> value[i][j];
            }
        }
        for(int i = 0; i < n; i++){
            rta = min(rta, calculate(i, 0));
        }
        for(int i = 0; i < n; i++){
            if(dp[i][0] == rta){
                rebuilt(i, 0);
                break;
            }
        }

        for(int i = 0; i < m; i++){
            if(i+1 != m) cout << path[i] << " ";
            else cout << path[i] << endl;
        }
        cout << rta << endl;
    }
    return 0;
}
