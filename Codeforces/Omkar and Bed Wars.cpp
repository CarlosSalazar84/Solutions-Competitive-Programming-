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

const int MAX=2e5+7;
const int oo=1e9+7;
int dp[MAX][3];
string s;
int n;

int calculate(int i,bool c,string p){
    cout << "ENTRO EN EL ESTADO " << i << " " << p << endl;
    if(dp[i][c]!=-1) return dp[i][c];
    if(i==n){
        cout << "FINALIZA " << endl;
        if(p[i-1]==p[0] && p[i]==p[i-2]){
            cout << "R oo " << endl;
            return oo;
        }
        else return 0;
    }
    if(s[i+1]=='R'){
        dp[i][c]=min(calculate(i+1,0,p+='R'),calculate(i+1,1,p+='L')+1);
    }
    else{
        dp[i][c]=min(calculate(i+1,0,p+='R')+1,calculate(i+1,1,p+='L'));
    }
    cout << "RETORNA EN EL ESTADO " << i << " " << p << " " << dp[i][c] << endl;
    return dp[i][c];
}

int main(){
    int t;
    cin >> t;
    while(t--){
        memset(dp,-1,sizeof(dp));
        int rta=0;
        string s;
        cin >> n;
        cin >> s;
        if(s[0]=='R'){
            dp[0][0]=calculate(0,0,"R");
            dp[0][1]=calculate(0,1,"L")+1;
        }
        else{
            dp[0][0]=calculate(0,0,"R")+1;
            dp[0][1]=calculate(0,1,"L");
        }
        for(int i=0;i<n;i++){
            cout << dp[i][0] << " ";
        }
        cout << endl;
        for(int i=0;i<n;i++){
            cout << dp[i][1] << " ";
        }
        cout << endl;
        cout << min(dp[0][0],dp[0][1]) << endl;
    }
    return 0;
}
