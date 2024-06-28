                                //  NEAREST GREATER TO RIGHT || NEXT LARGE ELEMENT


/*
for(i=0;i<n-1;i++){
 for(j=i+1;j<n;j++){
   if(a[i]<a[j]){
     ans.push_back(a[j]);                         O(n2)
     break;
   }
 }
}
*/

#include<bits/stdc++.h>
using namespace std;

void nextLarge(vector<int> v){
 int n=v.size();
 vector<int> ans;
 stack<int> s;
 for(int i=n-1;i>=0;i--){
    while(!s.empty() && v[i]>s.top()){
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
 for(int j=n-1;j>=0;j--){
    cout<< ans[j]<<" ";
 }
}

int main(){
    vector<int> v={1,2,5,4,3};
    nextLarge(v);
}