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
    int a,b,n,aux,out;
    cin >> a >> b;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> aux;
        if(aux<=1000){
            cout << aux << " " << a*aux << endl;
        }
        else{
            out=(a*1000)+(aux-1000)*b;
            cout << aux << " " << out << endl;
        }
    }
    return 0;
}

