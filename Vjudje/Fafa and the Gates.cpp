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
    fastIO;
    int n,x=0,y=0,rta=0;
    string s;
    cin >> n >> s;
    if(s[0]=='U') y++;
    else x++;
    for(int i=1;i<n;i++){
        if(x==y && s[i]==s[i-1]) rta++;
        if(s[i]=='U') y++;
        else x++;
    }
    cout << rta << endl;
    return 0;
}
