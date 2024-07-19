#include<bits/stdc++.h>
using namespace std;
void permutation(vector<int>v,int i){
    if(i==v.size()){
        for(int k:v){
            cout<<k;
        }
        cout<<" ";
        return;
    }
    for(int j=i;j<v.size();++j){
        swap(v[i],v[j]);
        permutation(v,i+1);
        swap(v[i],v[j]);
    }
}
int main(){
    vector<int>v{1,2,3}; // 3! (3 factorial)
    permutation(v,0);
}