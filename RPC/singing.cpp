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
    int n;
    cin >> n;
    while(n--){
        int t,s,r,l;
        ll rta=0;
        cin >> t >> s;
        int lista[s];
        for(int i=0;i<s;i++){
            cin >> lista[i];
        }
        for(int i=0;i<s-1;i++){
            if(lista[i]==lista[i+1]) rta++;
            else{
                if(lista[i+1]>lista[i]){
                    r=lista[i+1]-lista[i]-1;
                    l=lista[i]+t-lista[i+1]+1;
                    rta+=min(l,r);
                }
                else{
                    r=lista[i+1]+t-lista[i]-1;
                    l=lista[i]-lista[i+1]+1;
                    rta+=min(l,r);
                }
            }
        }
        cout << rta << endl;
    }
}
