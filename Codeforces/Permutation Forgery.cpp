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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> in(n);
        for(int i = 0; i < n; i++){
            cin >> in[i];
        }

        reverse(in.begin(), in.end());

        for(int i = 0; i < n; i++){
            if(i != n-1) cout << in[i] << " ";
            else cout << in[i] << endl;
        }
    }
    return 0;
}
