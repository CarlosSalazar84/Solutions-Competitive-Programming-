#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define ft first
#define sd second
#define pb push_back
#define pob pop_back()
#define pf push_front
#define pof pop_front()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<char,char> pcc;
typedef pair<double,double> pdd;
typedef pair<long long,long long> pll;
// scanf("%d %d %d %d",&w,&b,&d,&s); %lld
// printf("%d\n" ,points);
// const double PI=acos(-1);

int main(){
    int t;
    cin >> t;
    while(t--){// Caso n=1
        int n,ind,rta=0,ult;
        map<int,int> num;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
            num[arr[i]]++;
        }
        sort(arr,arr+n);
        if(n==1) cout << 0 << endl;
        else{
            ind=arr[0]+arr[1];
            ult=arr[n-2]+arr[n-1];
            for(int i=ind;i<ult+1;i++){
                map<int,int> aux;
                int cnt=0;
                aux=num;
                for(int j=0;j<n;j++){
                    if(arr[j]<i && aux[arr[j]]>0 && aux[i-arr[j]]>0){
                        if(arr[j]!=i-arr[j] || aux[arr[j]]>1){
                            cnt++;
                            aux[arr[j]]--;
                            aux[i-arr[j]]--;
                        }
                    }
                }
                if(rta<cnt) rta=cnt;
            }
            cout << rta << endl;
        }
    }
    return 0;
}
