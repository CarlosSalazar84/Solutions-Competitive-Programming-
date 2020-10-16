#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int s,temp,b,c,cnt,comida=0;
        cin >> s;
        temp=s;
        cnt=s;
        while(cnt!=0){
            if(temp>10) comida+=(temp/10)*10;
            else comida+=temp;
            b=(temp/10)*10;
            c=(temp/10);
            temp=temp-b+c;
            cnt=b;
        }
        cout << comida << endl;
    }
    return 0;
}
