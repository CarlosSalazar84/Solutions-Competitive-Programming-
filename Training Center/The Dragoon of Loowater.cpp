#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    while(cin >> n >> m){
        if(n==0 && m ==0){
            break;
        }
        int x=0,y=0,a=0,D[n],C[m];
        for(int i=0;i<n;i++){
            cin >> D[i];
        }
        for(int i=0;i<m;i++){
            cin >> C[i];
        }
        sort(D,D+n);
        sort(C,C+m);
        while(x<n && y<m){
            if(D[x]>C[y]){
                y++;
            }else{
                a+=C[y];
                x++;
                y++;
            }
        }
        if(x==n){
            cout << a << endl;
        }else{
            cout << "Loowater is doomed!" << endl;
        }
    }
}
