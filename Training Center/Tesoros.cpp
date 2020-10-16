#include<bits/stdc++.h>
using namespace std;

int main(){
    int w;
    cin >> w;
    for(int i=0;i<w;i++){
        int n;
        cin >> n;
        int a[n],b[n],c[n],x=0,y=0;
        for(int j=0;j<n;j++){
            cin >> a[j];
        }
        for(int j=0;j<n;j++){
            cin >> b[j];
        }
        for(int j=0;j<n;j++){
            c[j]=a[j]*b[j];
        }
        for(int j=0;j<n;j++){
            if(c[j]>x){
                x=c[j];
                y=j;
            }
        }
        y++;
        cout << y << endl;
    }
    return 0;
}
