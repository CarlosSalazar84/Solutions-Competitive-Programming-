#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,k,temp;
        cin >> n >> k;
        char s[n];
        for(int j=0;j<n;j++){
            s[j]='a';
        }
        for(long long j=1;j<n;j++){
            bool seguir=((j*(j-1))/2)<k && ((j*(j+1))/2)>=k;
            if(seguir){
                temp=k-((j*(j-1))/2)-1;
                s[n-1-j]='b';
                s[n-1-temp]='b';
                for(int l=0;l<n;l++){
                    cout << s[l];
                }
                cout << endl;
            }
        }
    }
}
