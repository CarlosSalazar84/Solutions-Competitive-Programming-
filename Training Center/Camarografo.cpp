#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            int t,k,x, xmax = 0;
            cin >> t >> k;
            for(int j=0;j<t;j++){
                cin >> x;
                if(x>xmax){
                        xmax=x;
                }
            }
            xmax+=k;
            cout << xmax << endl;
        }
        return 0;
}

