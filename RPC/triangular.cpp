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
        ll n,x,y,aux;
        cin >> n;
        ll l=1,r=1e7,m;
        while(l!=r){
            m=(l+r)/2;
            aux=4*m*(m-1)+4*m+1;
            if(aux<n) l=m+1;
            else r=m;
        }
        l--;
        aux=4*l*(l-1)+4*l+1;
        x=2*l;
        y=-l;
        if(aux+4*l+1<n){
            aux+=4*l+1;
            x-=4*l+1;
            if(aux+2*l+1<n){
                aux+=2*l+1;
                x+=2*l+1;
                y+=2*l+1;

                aux=n-aux;
                x+=aux;
                y-=aux;
            }
            else{
                aux=n-aux;
                x+=aux;
                y+=aux;
            }
        }
        else{
            aux=n-aux;
            x-=aux;
        }
        cout << x << " " << y << endl;
    }
    return 0;
}
