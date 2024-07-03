#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v{1,3,2,4,2};
    stack<int>s;
    vector<int>ans;
    int n=v.size();
    for(int i=n-1;i>=0;--i){
        while (!s.empty() && s.top()>v[i])
        {
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