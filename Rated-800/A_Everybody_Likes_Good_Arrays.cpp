# include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
        }

        int operation = 0;

        for(int i = 1 ; i < n ; i++){
            if((v[i] % 2 == 0 && v[i-1] % 2 == 0 || v[i] % 2 == 1 && v[i-1] % 2 == 1)){
                operation++;
            }
        }
        
        cout << operation << '\n';
        
    }
}