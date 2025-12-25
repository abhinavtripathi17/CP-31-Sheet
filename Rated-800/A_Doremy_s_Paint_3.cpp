#include <bits/stdc++.h>
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
        map<int , int>mpp;
        for(int i = 0 ; i < n ; i++){
            mpp[v[i]]++;
        }
        if(mpp.size() > 2) cout<<"No"<<endl;

        else{
            int f1 = mpp.begin()->second;
            int f2 = mpp.rbegin()->second;

            if(f1 == f2) cout<<"Yes"<<endl;
            else if(n % 2 == 1 && abs(f1 - f2) == 1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}