#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={2,1,3,2,4,6};
    int n=v.size();
    vector<int> ans;
    stack<int> s;
    for(int i=0;i<n;i++){
        while (!s.empty() && s.top()>v[i]){
            /* code */
            s.pop();
        }
        
        if(s.empty()){
            ans.push_back(-1);
        }
        else{
            ans.push_back(s.top());
        }
        s.push(v[i]);
    }

    for(int i:ans){
        cout<<i<<" ";
    }
}