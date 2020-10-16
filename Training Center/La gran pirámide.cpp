#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    for(int i=0;i<T;i++){
        long long n,rta;
        cin >> n;
        rta=((2*n*(n+1)*((2*n)+1))/3)-(2*n*(n+1))+n;
        cout << rta << endl;
    }
}
