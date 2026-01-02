# include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n , k;
        cin >> n >> k;

        vector<long long>v(n);
        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
        }
        
        int cnt = 1, maxi = 1;


        sort(v.begin() , v.end());

        for(int i = 1 ; i < n ; i++){
            if(v[i] - v[i-1] <= k){
                cnt++;
            }
            else{
                cnt = 1;
            }
            maxi = max(cnt , maxi);
        } 

        cout << n - maxi  << '\n';
    }
}