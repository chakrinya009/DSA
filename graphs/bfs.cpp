#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>adj[n+1];
    int vis[n]={0};
    vector<int>bfs;
    queue<int>q;
    vis[0]=1;
    q.push(0);
    while(!q.empty()){
        int node=q.front();
        q.pop();
        bfs.push_back(node);
        for(int i:adj[node]){
          if(!vis[i]){
            q.push(i);
            vis[i]=1;
          }
        }

    }

    
}