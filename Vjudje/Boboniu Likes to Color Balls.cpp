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

bool succes[102];

int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        int b[4],sum=0;
        bool ac=false;
        for(int i=0;i<4;i++){
            cin >> b[i];
        }
        for(int i=0;i<4;i++){
            sum+=b[i]%2==1;
        }
        if(sum<2) ac=true;
        else if(b[0] && b[1] && b[2]){
            sum=4-sum;
            if(sum<2) ac=true;
        }
        if(ac) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
