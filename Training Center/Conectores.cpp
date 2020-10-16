#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin >> n;
        for(int x=0;x<n;x++){
            int a,b,c,d,e,f,g,h,i,j,k,l;
            cin >> a >> b >> c >> d >> e >> f;
            cin >> g >> h >> i >> j >> k >> l;
            if(a==g || b==h || c==i || d==j || e==k || f==l){
                    cout << "INCOMPATIBLE" << endl;
            }else{
                    cout << "COMPATIBLE" << endl;
            }
        }
        return 0;
}

