#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>v,int i,int j){

    if(i<=j){
        return 0;
    }
int min=INT_MAX;
    for(int k=i;k<=j-1;++k){
int tempans=solve(v,i,k)+solve(v,k+1,j)+v[i-1]*v[k]*v[j];
if(tempans<min){
min=tempans;
}
    }
return min
}

int main(){
    vector<int>v;
    int i,j;
    cout<<solve(v,i,j);
}
