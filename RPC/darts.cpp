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

const double PI=acos(-1);
int sign(double x) { return (double(0) < x) - (x < double(0)); }

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int w,b,d,s,n,points=0;
        double c;
        double auxA,auxB,grades,dis;
        scanf("%d %d %d %d",&w,&b,&d,&s);
        scanf("%d", &n);
        c=360.0/w;
        vector<pdd> darts;
        for(int i=0;i<n;i++){
            scanf("%lf %lf",&auxA,&auxB);
            darts.pb({auxA,auxB});
        }
        for(int i=0;i<n;i++){
            int num=w;
            double m=c;
            auxA=(darts[i].ft*darts[i].ft);
            auxA+=(darts[i].sd*darts[i].sd);
            dis=auxA;
            auxA=sqrt(auxA);
            if(sign(darts[i].ft)==sign(darts[i].sd)){
                grades=atan(abs(darts[i].ft)/abs(darts[i].sd));
            }
            else{
                grades=atan(abs(darts[i].sd)/abs(darts[i].ft));
            }
            grades=(grades*180)/PI;
            if(darts[i].ft>0 && darts[i].sd>0){
              grades+=270;
            }
            else if(darts[i].ft<0 && darts[i].sd<0){
              grades+=90;
            }
            else if(darts[i].ft<0 && darts[i].sd>0){
              grades+=180;
            }
            while(grades>m){
              num--;
              m+=c;
            }
            if(dis<b*b) points+=50;
            else if(dis<d*d) points+=num*2;
            else if(dis<s*s) points+=num;
        }
        printf("%d\n" ,points);
    }
    return 0;
}
