#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v{4,2,6,3,5,1};
    int n=v.size();
    int minindex;
    for(int i=0;i<n-1;++i){
        minindex=i;
        for(int j=i+1;j<n;++j){
            if(v[j]<v[minindex]){
                minindex=j;
            }
        }
        swap(v[minindex],v[i]);
    }

    for(int k=0;k<n;++k){
        cout<<v[k]<<" ";
    }
}