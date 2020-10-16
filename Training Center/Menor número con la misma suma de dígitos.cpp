#include<bits/stdc++.h>
using namespace std;

int main(){
        int n,temp,t;
        vector<int> rta;
        while(cin >> n){
            if(n==0) break;
            t=1;
            temp=0;
            bool resultado=true;
            while(resultado){
                if(n<(9*t)){
                    if(n-temp!=0)rta.push_back(n-temp);
                    resultado=false;
                }
                else{
                    rta.push_back(9);
                    temp+=9;
                    t++;
                }
            }
            temp=rta.size();
            for(int i=0;i<temp;i++){
                cout << rta.back();
                rta.pop_back();
            }
            cout << endl;
        }
        return 0;
}

