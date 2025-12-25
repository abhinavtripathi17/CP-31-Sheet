#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int l = 0 , r = n - 1;
        while(l < r && s[l] != s[r]){
            l++;
            r--;
        }
        cout << r-l+1 <<'\n';
    }
}