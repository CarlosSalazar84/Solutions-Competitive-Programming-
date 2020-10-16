#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            int a,b,c;
            cin >> a >> b >> c;
            if((a<b && b<c) || (c<b && b<a)){
                    cout << b << endl;
            }else if((b<a && a<c) || (c<a && a<b)){
                    cout << a << endl;
            }else{
                    cout << c << endl;
            }
        }
        return 0;
}

