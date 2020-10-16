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
typedef pair<long long,long long> pll;

const int MAX=105;
double dp[MAX][MAX][MAX];
int r,p,s;

int main(){
    fastIO;
    cout << fixed << setprecision(10);
    cin >> r >> s >> p;
    double rock=0,scissor=0,paper=0;
    dp[r][s][p]=1.0;
    for(int i=r;i>=0;i--){
        for(int j=s;j>=0;j--){
            for(int k=p;k>=0;k--){
                double den=(i*j)+(j*k)+(i*k);
                if(i&&j){
                    dp[i][j-1][k]+=((i*j)/den)*dp[i][j][k];
                }
                if(i&&k){
                    dp[i-1][j][k]+=((i*k)/den)*dp[i][j][k];
                }
                if(j&&k){
                    dp[i][j][k-1]+=((j*k)/den)*dp[i][j][k];
                }
            }
        }
    }
    for(int i=1;i<=r;i++){
        rock+=dp[i][0][0];
    }
    for(int i=1;i<=s;i++){
        scissor+=dp[0][i][0];
    }
    for(int i=1;i<=p;i++){
        paper+=dp[0][0][i];
    }
    cout << rock << " " << scissor << " " << paper << endl;
}
