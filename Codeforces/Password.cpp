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

int main(){
    int rta=0,lim;
    string s,p;
    cin >> p;
    s=p;
    reverse(s.begin(),s.end());
    vector<int> pre,suf;
    pre=prefix_function(p);
    suf=prefix_function(s);
    reverse(suf.begin(),suf.end());
    lim=p.size();
    for(int i=0;i<lim;i++){
        if(pre[i]!=0 && suf[i]!=0){
            if(pre[i]==suf[i-pre[i]+1] && rta<pre[i]) rta=pre[i];
        }
    }
    if(rta){
        for(int i=0;i<rta;i++){
            cout << p[i];
        }
        cout << endl;
    }
    else cout <<  "Just a legend" << endl;
    return 0;
}
