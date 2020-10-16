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

const int MAX=2e5+5;
int numbers[MAX];

int main(){
    int n,in,l=-1,r=1,out;
    char aux;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> aux >> in;
        if(aux=='L'){
            numbers[in]=l;
            l--;
        }
        else if(aux=='R'){
            numbers[in]=r;
            r++;
        }
        else{
            if(numbers[in]>0){
                out=min(r-numbers[in]-1,numbers[in]+abs(l)-2);
            }
            else{
                out=min(r+abs(numbers[in])-2,abs(l)+numbers[in]-1);
            }
            cout << out << endl;
        }
    }
    return 0;
}
