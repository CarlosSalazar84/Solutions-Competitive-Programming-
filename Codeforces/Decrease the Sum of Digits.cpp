#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
//#define endl '\n'
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

const int mod=1e9+7;

int main(){
    fastIO;
    int t;
    cin >> t;
    while(t--){
        ll cant = 0, pot = 1;
        int s, sum = 0, lim;
        string n = "0", aux;
        cin >> aux >> s;
        n += aux;
        lim = n.size();
        for(int i = 0; i < lim; i++){
            sum += (n[i]-'0');
        }
        if(sum > s){
            for(int i = lim-1; i > 0; i--){
                if(n[i] != '0'){
                    sum -= n[i]-'0'-1;
                    cant += (10-(n[i]-'0'))*pot;
                    if(n[i-1]!='9') n[i-1]++;
                    else{
                        while(n[i-1]=='9'){
                            n[i-1] = 0;
                            sum -= 9;
                            i--;
                            pot*=10;
                        }
                        n[i-1]++;
                    }
                }
                pot *= 10;
                if(sum <= s) break;
            }
        }
        cout << cant << endl;
    }
    return 0;
}
