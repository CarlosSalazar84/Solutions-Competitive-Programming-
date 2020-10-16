#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,r;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> r;
        int A[r],m=0;
        for(int j=0;j<r;j++){
            cin >> A[j];
        }
        sort(A,A+r);
        for(int j=0;j<r;j++){
                while(A[j]==A[j-1]){j++;}
            for(int k=j+1;k<r;k++){
                    while(A[k]==A[j] || A[k]==A[k-1]){k++;}
                for(int l=j+2;l<r;l++){
                    while(A[l]==A[j] || A[l]==A[k] || A[l]==A[l-1]){l++;}
                    if(A[l]==sqrt((A[j]*A[j])+(A[k]*A[k]))){
                        m++;
                    }
                }
              }
        }
        cout << m << endl;
        }
    return 0;
}

