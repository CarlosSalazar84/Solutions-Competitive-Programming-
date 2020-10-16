#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    long long dormitorios[n],cartas[m];
    for(int i=0;i<n;i++){
        cin >> dormitorios[i];
    }
    for(int i=0;i<m;i++){
        cin >> cartas[i];
    }
    for(int i=1;i<n;i++){
        dormitorios[i]+=dormitorios[i-1];
    }
    for(int i=0;i<m;i++){
        int a=lower_bound(dormitorios,dormitorios+n,cartas[i])-dormitorios;
        if(a==0){
            cout << a+1 << " " << cartas[i] << endl;
        }else{
            cout << a+1 << " " << cartas[i]-dormitorios[a-1] << endl;
        }
    }
    return 0;
}
