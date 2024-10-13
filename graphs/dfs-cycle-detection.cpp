#include<bits/stdc++.h>
using namespace std;

bool dfs(int src,int vis[],vector<int>adj[]){
    vis[src]=1;
    for(int adjnode:adj[src]){
        if(dfs(i,vis,adj)){
        return true;
      }
        else if(adjnode!=parent){
            return true;
        }
    }
    return false;
}

int main(){
    int v=8;
    int vis[]={0};
    vector<int>adj[v+1];
    for(int i=0;i<v;++i){
      if(dfs(i,vis,adj)){
        return true;
      }
    }

    return false;
}