# include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
        }

        int count_pos = 0 , count_neg = 0;

        for(int i = 0 ; i < n ; i++){
            if(v[i] == 1) count_pos++;
            if(v[i] == -1) count_neg++;
        }

        int ops = 0;

        while(count_pos < count_neg || count_neg % 2 != 0){
            count_pos++;
            count_neg--;
            ops++;
        }
        cout<<ops<<endl;
    }
}