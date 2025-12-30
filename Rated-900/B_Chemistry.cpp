# include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int k;
        cin >> k;

        string s;
        cin >> s;

        vector<int>freq(26 , 0);

        for(int i = 0 ; i < s.length() ; i++){
            freq[s[i] - 'a']++;
        }
        int odd_cnt = 0;
        for(int i = 0 ; i < freq.size() ; i++){
            if(freq[i] % 2 == 1){
                odd_cnt++;
            }
        }
        if(odd_cnt > k+1){
            cout << "NO" <<'\n';
        }
        else{
            cout <<"YES" <<'\n';
        }

    }
}