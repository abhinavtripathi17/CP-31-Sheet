#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int>v(n-1);
        for(int i = 0 ; i < n-1 ; i++){
            cin >> v[i];
        }

        int sum = 0;
        for(int i = 0 ; i < v.size() ; i++){
            sum += v[i];
        }

        cout<<-(sum)<<endl;
    }
}