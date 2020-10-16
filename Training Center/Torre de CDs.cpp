#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    for(int i=0;i<x;i++){
        int n,a,c=0;
        cin >> n;
        int A[n];
        for(int j=0;j<n;j++){
            cin >> a;
            if (a!=0){
                A[c]=a;
                c++;
            }else{
                if(c==0){}
                else{
                    c--;
                    cout << A[c] << endl;
                }
            }
        }
    }
    return 0;
}
