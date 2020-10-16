#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    for(int i=0;i<x;i++){
        int n,a,b,c=0,d=0;
        cin >> n;
        int A[n/2];
        for(int j=0;j<n;j++){
            cin >> a >> b;
            if (a==1){
                A[c]=b;
                c++;
            }else{
                cout << A[d] << endl;
                d++;
            }
        }
    }

}
