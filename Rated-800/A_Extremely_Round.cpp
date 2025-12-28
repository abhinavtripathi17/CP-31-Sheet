# include <bits/stdc++.h>
using namespace std;

bool check(int n){
    int zero_cnt = 0;
    int digit_cnt = 0;

    while(n > 0){
        if(n%10 == 0){
            zero_cnt++;
        }
        digit_cnt++;
        n = n/10;

    }
    if(digit_cnt - zero_cnt == 1){
        return true;
    }
    return false;
    
}
int main(){
    vector<int>v;
    for(int i = 1 ; i <= 999999 ; i++){
        if(check(i)){
            v.push_back(i);
        }
    }
    int t;
    cin >> t;

    while(t--){
        int n ; 
        cin >> n;
        int counter = 0;
        for(int i = 0 ; i < v.size() ; i++){
            if(n >= v[i]){
                counter++;
            }
            else break;
        }
        cout << counter <<'\n';
    }
    
}