                                //NEXT LARGE LEFT

#include<bits/stdc++.h>
using namespace std;
int main(){
 vector<int> v={3,1,5,2,4};
 int n=v.size();
 vector<int> ans;
 stack<int> s;
 for(int i=0;i<n;i++){
    while (!s.empty() && v[i]>s.top())
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