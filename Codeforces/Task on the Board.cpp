#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
#define ft first
#define sd second
#define pb push_back
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<char,char> pcc;
typedef pair<long long,long long> pll;

const int MAX=51;
int arr[MAX];
int m;

void restar(int j){
    for(int i=0;i<m;i++){
        if(arr[i]>0) arr[i]-=abs(i-j);
        else if(arr[i]==0) arr[i]--;
    }
}

int main() {
    #ifndef LOCAL
    fastIO;
    #endif
    int t;
    cin >> t;
    memset(arr,-1,sizeof(arr));
    for(int i=0;i<t;i++){
        string s;
        set<char> letras;
        int n,aux,ceros;
        int cantidadL[27]={};
        bool go=true;
        cin >> s;
        cin >> m;
        n=s.size();
        string rta=string(m,'0');
        for(int j=0;j<m;j++){
            cin >> arr[j];
        }
        for(int j=0;j<n;j++){
            letras.insert(s[j]);
            cantidadL[int(s[j]-97)]++;
        }
        /*for(auto &x:cantidadL){
            cout << x << " ";
        }
        cout << endl;*/
        while(go){
            vector<int> x;
            char letra;
            aux=0;
            for(int j=0;j<m;j++){
                if(arr[j]==0) x.pb(j);
            }
            /*for(auto &y:x){
                cout << y << " ";
            }
            cout << endl;*/
            ceros=x.size();
            //cout << "STEP 1" << endl;
            while(aux<ceros){
                letra=*letras.rbegin();
                aux=cantidadL[letra-97];
                letras.erase(letra);
            }
            /*cout << "LA LETRA ACTUAL ES: " << letra << " Y HAY " << aux << endl;
            for(int j=0;j<m;j++){
                cout << arr[j] << " ";
            }
            cout << endl;*/
            if(x.empty()) go=false;
            else{
                for(auto &y:x){
                    rta[y]=letra;
                    restar(y);
                }
                //cout << rta << endl;
            }
        }
        cout << rta << endl;
    }
    return 0;
}

