#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int t,o=0,e=0,s=0;
        cin >> t;
        int a[t];
        for(int j=0;j<t;j++){
            cin >> a[j];
        }
        for(int j=0;j<t;j++){
            if(a[j]%2==1){
                o++;
            }else e++;
        }
        if(o==t){
            for(int j=0;j<t;j++){
                s+=a[j];
            }
        }else if(o>0 && e>0)s++;
        if(s%2==1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
