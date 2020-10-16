#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin >> n;
    for(int i=0;i<n;i++){
        int temp=0,c=0;
        cin >> t;
        string s[t];
        int rta=-1;
        for(int j=0;j<t;j++){
            cin >> s[j];
        }
        sort(s,s+t);
        for(int j=0;j<t-1;j++){
            temp=0;
            while(s[j]==s[j+1]){
                    temp++;
                    j++;
            }
            if(temp>c){
                c=temp;
                rta=j;
            }
        }
        if(rta==-1){
            cout << s[0] << endl;
        }else{
            cout << s[rta] << endl;
        }
    }
}
