#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a[3];
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin >> a[j];
        }
        sort(a,a+3);
        if(a[2]==sqrt((a[0]*a[0])+(a[1]*a[1]))){
            cout << "SI" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}

