#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long>v(n);
        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
        }

        vector<long long>f;
        f.push_back(v[0]);

        for(int i = 1 ; i < n ; i++){
            if(v[i-1] <= v[i]){
                f.push_back(v[i]);
            }
            else{
                f.push_back(v[i]);
                f.push_back(v[i]);
            }
        }
        cout<<f.size()<<endl;
        for(int i = 0 ; i < f.size() ; i++){
            cout<<f[i]<<" ";
        }
        cout<<endl;
    }
}