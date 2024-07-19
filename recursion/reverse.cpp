// reverse the array

#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>&v,int start,int end){
 
 if(start>=end){
   return;
 }
 swap(v[start],v[end]);
 reverse(v,start+1,end-1);

}

int main(){
    vector<int>v{1,2,3,4};
    int n=v.size()-1;
    reverse(v,0,n);
    for(int i:v){
        cout<<i<<" ";
    }
}