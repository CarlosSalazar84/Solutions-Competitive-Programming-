#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b,c;
	cin>>n;
	int x[n];
	vector<int>cartas;
	vector<int>sobrantes;
	for(int i=0; i<n; i++){
		cin>>x[i];
	}
	for(int i=n-1; i>=0; i--){
        cartas.push_back(x[i]);
	}
	while(!cartas.empty()){
		a=cartas.size();
		if(a==1){
            b=cartas.back();
            sobrantes.push_back(b);
			cartas.pop_back();
		}
		else if((cartas[a-1]+cartas[a-2])%2!=0){
			b=cartas.back();
			sobrantes.push_back(b);
			cartas.pop_back();
		}else{
			cartas.pop_back();
			cartas.pop_back();
			if(!sobrantes.empty()){
                b=sobrantes.back();
                sobrantes.pop_back();
                cartas.push_back(b);
			}
		}
	}
    c=sobrantes.size();
    cout << c << endl;
	return 0;
}
