# include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long a,b,c;
        cin >> a >> b >> c;

        if(a+c > b+c){
            cout << "First" << endl;
        }
        else if(a+c < b+c){
            cout << "Second" << endl;
        }
        else if(a+c == b+c && (a+b+c)%2 == 1){
            cout << "First" << endl;
        }
        else{
            cout << "Second" <<endl;
        }
    }
    return 0;
}