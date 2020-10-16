#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            int p, m,x = 0, y = 0;
            cin >> p;
            for(int j=0;j<p;j++){
                cin >> m;
                if(m==1){
                        y+=1;
                }else if(m==2){
                        y-=1;
                }else if(m==3){
                        x-=1;
                }else if(m==4){
                        x+=1;
                }
            }
            cout << x << "," << y << endl;
        }
        return 0;
}

