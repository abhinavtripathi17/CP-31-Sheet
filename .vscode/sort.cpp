#include <bits/stdc++.h>
using namespace std;

void insert(vector<int>&v , int temp){
    if(v.size() == 0|| v[v.size()-1] <= temp){
        v.push_back(temp);
        return;
    }
    int val = v[v.size()-1];
    v.pop_back();
    insert(v,temp);
    v.push_back(val);
}
//is that for sorting 
void sort_vec(vector<int>&v){
    if(v.size() == 1) return;
    int temp = v[v.size()-1];
    v.pop_back();
    sort_vec(v);
    insert(v,temp);
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }

    sort_vec(v);

    for(int val : v){
        cout<<val<<" ";
    }

    return 0;
    
}