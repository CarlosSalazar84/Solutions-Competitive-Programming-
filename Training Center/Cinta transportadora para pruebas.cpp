#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("out.txt", "w", stdout);
    int n;
    while(cin >> n){
        if(n==0){
            break;
        }
        long long t=0;
        int a=0,b=1,A[n];
        for(int i=0;i<n;i++){
            cin >> A[i];
        }
        for(int i=0;i<n;i++){
           /* cout << "ini\n";
            cout << i << " " << a << " " << b << " " << t << endl;
            for (auto &x : A) {
                cout << x << " ";
            } cout << endl;*/
            if(a==n-1){break;}
            if(a==b){
                b++;
            }
            if(A[a]>0){
                while(b<n && A[b]>=0){
                    b++;
                }
                if(A[a]>abs(A[b])){
                    t+=((abs(A[b]))*(b-a));
                    A[a]+=A[b];
                    A[b]=0;
                }else if(A[a]<abs(A[b])){
                    t+=(A[a]*(b-a));
                    A[b]+=A[a];
                    A[a]=0;
                    a++;
                }else if(A[a]==abs(A[b])){
                    t+=(A[a]*(b-a));
                    A[a]=0;
                    A[b]=0;
                    a++;
                }
            }else if(A[a]<0){
                while(b<n && A[b]<=0){
                    b++;
                }
                if(A[b]>abs(A[a])){
                    t+=((abs(A[a]))*(b-a));
                    A[b]+=A[a];
                    A[a]=0;
                    a++;
                }else if(A[b]<abs(A[a])){
                    t+=(A[b]*(b-a));
                    A[a]+=A[b];
                    A[b]=0;
                }else if(abs(A[a])==A[b]){
                    t+=(A[b]*(b-a));
                    A[a]=0;
                    A[b]=0;
                    a++;
                }
            }
            if(A[a]==0){a++;}
            /*cout << "fin\n";
            cout << i << " " << a << " " << b << endl;
            for (auto &x : A) {
                cout << x << " ";
            } cout << endl;*/
        }
        cout << t << endl;
    }
}
