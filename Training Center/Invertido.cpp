#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[n-1-i];
    }
    for(int i=0;i<n;i++){
        cout << a[i] << endl;
    }
    return 0;
}
