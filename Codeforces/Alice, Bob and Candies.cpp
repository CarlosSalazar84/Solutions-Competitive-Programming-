#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define ft first
#define sd second
typedef long long ll;
typedef pair<int,int> pii;

int main() {
    #ifndef LOCAL
        fastIO;
    #endif
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n,temp,pesoActual=0,alice=0,bob=0,movimiento=0;
        cin >> n;
        deque<int> dulces;
        for(int j=0;j<n;j++){
            cin >> temp;
            dulces.push_back(temp);
        }
        while(!dulces.empty()){
            temp=0;
            if(movimiento%2==0){
                while(!dulces.empty() && temp<=pesoActual){
                    temp+=dulces.front();
                    dulces.pop_front();
                }
                alice+=temp;
                pesoActual=temp;
            }
            else{
                while(!dulces.empty() && temp<=pesoActual){
                    temp+=dulces.back();
                    dulces.pop_back();
                }
                bob+=temp;
                pesoActual=temp;
            }
            movimiento++;
        }
        cout << movimiento << " " <<  alice << " " << bob << endl;
    }
    return 0;
}
