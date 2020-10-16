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

vector<int> numbers={2,3,4,5,6,7,8,9,9};

int main(){
    int n;
    cin >> n;
    while(n--){
        int lim;
        string s;
        cin >> s;
        bool ok=true;
        lim=s.size();
        for(int i=0;i<lim;i++){
            s[i]=toupper(s[i]);
            if(s[i]=='S' || s[i]=='Z') s[i]--;
        }
        for(int i=0;i<lim/2;i++){
            if(numbers[(s[i]-'A')/3]!=numbers[(s[lim-i-1]-'A')/3]){
                ok=false;
                break;
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
