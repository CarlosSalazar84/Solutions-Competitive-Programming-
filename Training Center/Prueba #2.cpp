  #include <bits/stdc++.h>
  using namespace std;

  int main(){
        int n;
        cin >> n;
        for (int i=0;i<n;i++){
            int m, p;
            cin >> m >> p;
            if(m<p){
                    cout << "ganamos";
            }else if(m>p){
                    cout << "perdimos";
            }else{
                    cout << "casi ganamos";
            }cout << endl;
        }
        return 0;
  }
