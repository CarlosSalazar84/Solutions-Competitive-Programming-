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
    for(int c=1;c<=t;c++){
        int n,aux=9,tam=1,j;
        string s="1",p;
        cin >> n;
        while(n>aux){
            n-=aux;
            aux*=10;
            tam++;
        }
        n--;
        cout << n << endl;
        for(int i=1;i<tam;i++){
            s+="0";
        }
        j=tam-1;
        while(n){
            s[j]+=n%10;
            n/=10;
            j--;
        }
        p=s;
        p.pob;
        reverse(p.begin(),p.end());
        s+=p;
        cout << "Case " << c << ": " << s << endl;
    }
    return 0;
}
