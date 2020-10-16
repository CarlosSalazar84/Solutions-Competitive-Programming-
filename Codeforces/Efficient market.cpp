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

int main(){
    int n,m;
    double d;
    cin >> n >> m >> d;
    double days[m][n],aux,l,r;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> days[i][j];
        }
    }
    for(int i=0;i<n-1;i++){
        aux=d;
        for(int j=0;j<m;j++){
            if((d/days[j][i])*days[j][i+1]>aux){
                aux=(d/days[j][i])*days[j][i+1];
            }
        }
        d=aux;
    }
    cout << d << endl;
    return 0;
}
