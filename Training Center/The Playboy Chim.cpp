#include<bits/stdc++.h>
using namespace std;

int upper(long long A[],int a, int b, long long x){
                while(a<b){
                    int m=(a+b)/2;
                    if(x>=A[m]){a=m+1;}
                    else{b=m;}
                }
                return a;
        }
int lower(long long A[],int a, int b, long long x){
                while(a<b){
                    int m=(a+b)/2;
                    if(x<A[m]){a=m;}
                    else{b=m;}
                }
                return a;
        }
int main(){
    int n,q,b=0;
    cin >> n;
    long long a[n+2],h,x,y;
    for(int i=1;i<n+2;i++){
        cin >> a[i];
    }
    a[n+2]=-1;
    cin >> q;
    for(int i=0;i<q;i++){
        cin >> h;
        x=upper(a,b,n,h);
        b=0;
        y=lower(a,b,n,h);
        if(y==-1){
            cout << "X ";
        }else{cout << y << " ";}
        if(x==-1){
            cout << "X " << endl;
        }else{cout << x << endl;}
    }
    return 0;
}

