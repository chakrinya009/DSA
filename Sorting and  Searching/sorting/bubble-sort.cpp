#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={3,2,4,6,5};
    int n=v.size();
    for(int i=0;i<n-1;++i){
        for(int j=0;j<n-i-1;++j){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }

    for(int k:v){
        cout<<k<<" ";
    }
}