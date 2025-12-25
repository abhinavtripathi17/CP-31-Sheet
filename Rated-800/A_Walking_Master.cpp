# include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t-- > 0){
        int a , b , c, d;
        cin >> a >> b >> c >> d;

        if(b > d){
            cout << -1 <<endl;
            continue;
        }

        int p = d - b;
        int q = a + p - c;

        if(q < 0){
            cout << -1 << endl;
        }
        else{
            cout << p + q << endl;
        }
        
    }
}