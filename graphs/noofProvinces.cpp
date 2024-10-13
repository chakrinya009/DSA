#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>adjls[n+1];
    int vis[n];
    int count=0;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            count++;
            dfs()
        }
    }
}