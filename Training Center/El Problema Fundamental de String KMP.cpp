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

vector<int> prefix_function(string &s){
    int n=s.size();
    vector<int> pf(n);
    pf[0]=0;
    for(int i=1,j=0;i<n;i++){
        while(j&&s[i]!=s[j]) j=pf[j-1];
        if(s[i]==s[j]) j++;
        pf[i]=j;
    }
    return pf;
}

vector<int> kmp(string &s, string &p){
    vector<int> out;
    int n=s.size(),m=p.size(),cnt=0;
    vector<int> pf=prefix_function(p);
    for(int i=0,j=0;i<n;i++){
        while(j&&s[i]!=p[j]) j=pf[j-1];
        if(s[i]==p[j]) j++;
        if(j==m){
            out.pb(i-p.size()+1);
            cnt++;
            j=pf[j-1];
        }
    }
    out.pb(cnt);
    return out;
}

int main(){
    string s,p,aux;
    while(cin >> s >> p){
        vector<int> out;
        int lim;
        out=kmp(s,p);
        lim=out[out.size()-1];
        if(lim==0) cout << "FALSE" << endl;
        else{
            cout << "TRUE" << endl;
            for(int i=0;i<lim;i++){
                if(i!=lim-1) cout << out[i] << " ";
                else cout << out[i] << endl;
            }
        }
    }
    return 0;
}
