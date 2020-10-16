#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int a,b,temp1,temp2,impr;
        cin >> a >> b;
        vector<int> rta[a+1];
        for(int j=0;j<b;j++){
            cin >> temp1 >> temp2;
            rta[temp1].push_back(temp2);
            rta[temp2].push_back(temp1);
        }
        for(int j=1;j<a+1;j++){
            sort(rta[j].rbegin(),rta[j].rend());
        }
        for(int j=1;j<a+1;j++){
            cout << j << " ";
            while(!rta[j].empty()){
                impr=rta[j].back();
                cout << impr;
                rta[j].pop_back();
            }
            cout << endl;
        }
    }
}
