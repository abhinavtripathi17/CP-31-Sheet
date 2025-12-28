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

        int mini = v[0];
        int maxi = v[n-1];

        if(mini == maxi){
            cout << "No" <<"\n";
            continue;
        }
        cout << "Yes" <<'\n';
        cout << maxi <<" ";

        for(int i = 0 ; i < n-1 ; i++){
            cout << v[i] << " ";
        }
        cout << "\n";
        
    }
}