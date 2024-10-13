#include<bits/stdc++.h>
using namespace std;

void dfs(int start,vector<int>adj[],int vis[],vector<int>&dfs){
   vis[start]=1;
   dfs.push_back(start);
   for(int i:adj[start]){
    if(!vis[i]){
        vis[i]=1;
        dfs(i,adj,vis,dfs);
    }
   }

}

int main(){
    int n;
    cin>>n;
    int vis[n]={0};
    int start=0;
    vector<int>adj[n+1];
    vector<int>dfs;
    dfs(start,adj,vis,dfs);
}