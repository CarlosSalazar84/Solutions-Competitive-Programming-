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

vector<int> z_function (string &s){
	int n=s.size();
	vector<int> z(n);
	for(int i=1,x=0,y=0;i<n;i++){
		z[i]=max(0,min(z[i-x],y-i+1));
		while(i+z[i]<n&&s[z[i]]==s[i+z[i]]){
			x=i,y=i+z[i],z[i]++;
		}
	}
	return z;
}

int main(){
    string s,p,aux;
    while(cin >> s >> p){
        vector<int> data,out;
        int lim,temp;
        aux=p;
        aux+='#';
        aux+=s;
        data=z_function(aux);
        lim=aux.size();
        temp=p.size()+1;
        for(int i=temp;i<lim;i++){
            if(data[i]==p.size()) out.pb(i-temp);
        }
        if(out.empty()) cout << "FALSE" << endl;
        else{
            cout << "TRUE" << endl;
            for(int i=0;i<out.size();i++){
                if(i+1!=out.size()) cout << out[i] << " ";
                else cout << out[i] << endl;
            }
        }
    }
    return 0;
}
