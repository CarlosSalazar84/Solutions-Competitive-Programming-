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
    int t;
    cin >> t;
    while(t--){
        int n,rta=0,r=0,aux=1;
        vector<int> sub;
        string s;
        cin >> n;
        cin >> s;
        while(r<n-1 && s[r]==s[r+1]) r++;
        if(r==n-1 && n%3!=0) rta++;
        rotate(s.begin(),s.begin()+r+1,s.end());
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]) aux++;
            else{
                sub.pb(aux);
                aux=1;
            }
        }
        sub.pb(aux);
        for(auto &x:sub) rta+=x/3;
        cout << rta << endl;
    }
    return 0;
}
