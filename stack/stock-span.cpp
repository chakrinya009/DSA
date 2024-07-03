////////////// consecutive smaller or equal to before it == nearest greater to left

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v{2,1,3,5,4,0,6,8,10};
    int n=v.size();
    stack<int>s;
    vector<int>ans;
    for(int i=0;i<n;++i){
        while (!s.empty() && v[s.top()]<v[i])
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
        s.push(i);
    }

    for(int i=0;i<n;++i){
        ans[i]=i-ans[i];
        cout<<ans[i]<<" ";
    }
}