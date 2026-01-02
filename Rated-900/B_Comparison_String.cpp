# include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int cnt = 1;
        int maxi = 1;
        for(int i = 1 ; i < n ; i++){
            if(s[i] == s[i-1]){
                cnt++;
            }
            else{
                cnt = 1;
            }
            maxi = max(maxi , cnt);
        }
        cout << maxi + 1 <<endl;
    }
}