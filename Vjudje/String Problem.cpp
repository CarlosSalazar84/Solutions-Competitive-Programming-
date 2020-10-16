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

const int MAX = 27;
const int oo = 1e8;
int dist[MAX][MAX];

void init(){
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            if(i == j) dist[i][j] = 0;
            else dist[i][j] = oo;
        }
    }
}

int main(){
    int n, v, lim, aux, rta = 0;
    char a, b;
    bool ok = true;
    string s, p, out = "";
    cin >> s >> p;
    cin >> n;
    init();
    for(int i = 0; i < n; i++){
        cin >> a >> b >> v;
        if(dist[a-'a'][b-'a'] == -1 || v < dist[a-'a'][b-'a']){
            dist[a-'a'][b-'a'] = v;
        }
    }

    if(s.size() != p.size()) ok = false;
    else{
        for(int k = 0; k < MAX; k++){
            for(int i = 0; i < MAX; i++){
                for(int j = 0; j < MAX; j++){
                    aux = dist[i][k] + dist[k][j];
                    if(aux < dist[i][j]){
                        dist[i][j] = aux;
                    }
                }
            }
        }

        lim = s.size();
        for(int i = 0; i < lim; i++){
            aux = oo;
            a = '*';
            if(s[i] != p[i]){
                for(int j = 0; j < MAX; j++){
                    if(dist[s[i]-'a'][j] != -1 && dist[p[i]-'a'][j] != -1){
                        if(aux > dist[s[i]-'a'][j] + dist[p[i]-'a'][j]){
                            aux = dist[s[i]-'a'][j] + dist[p[i]-'a'][j];
                            a = 'a' + j;
                        }
                    }
                }
                if(aux != oo){
                    out += a;
                    rta += aux;
                }
                else ok = false;
            }
            else out += s[i];
        }
    }

    if(ok){
        cout << rta << endl;
        cout << out << endl;
    }
    else cout << -1 << endl;
    return 0;
}

