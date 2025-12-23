# include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a , x , y;
        cin >> a >> x >> y;

        int r1 = min(x , y);
        int r2 = max(x,y);

        bool fast = false;

        for(int i = r1 ; i <= r2 ; i++){
            if(i == a) continue;
            if(abs(i - x) < abs(i - a) && abs(i - y) < abs(i - a)){
                fast = true;
                break;
            }
        }
        if(fast) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}