#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int b[n];
    double d;
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    for(int i=0;i<n-1;i++){
        d+=b[i]-b[i+1];
    }
    d/=n-1;
    d=round(d);
    int b2[n];
    for(int i=0;i<n;i++){
        if(i==0)b2[i]=d;
    }
    return 0;
}
