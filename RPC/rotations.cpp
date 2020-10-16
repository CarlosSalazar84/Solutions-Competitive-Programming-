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
        ll n;
        int aux;
        cin >> n;
        set<int> numbers;
        string s;
        bitset<32> num(n);
        s=num.to_string();
        for(int i=0;i<32;i++){
            aux=(s[i]-'0')*16 + (s[(i+1)%32]-'0')*8 +(s[(i+2)%32]-'0')*4
               +(s[(i+3)%32]-'0')*2 + (s[(i+4)%32]-'0');
            numbers.insert(aux);
        }
        if(numbers.size()==32) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}
