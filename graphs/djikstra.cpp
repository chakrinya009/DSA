#include<bits/stdc++.h>
using namespace std;
int main(){
    int v;
    vector<vector<int>>adj;
    int s;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
vector<int>dist(v);
    for(int i=0;i<v;++i){
        dist[i]=1e9;
    }

    dist[s]=0;
    pq.push({0,s});
while(!pq.empty()){
    int dis=pq.top().first;
    int node=pq.top().second;
    pq.pop();

    for(auto it:adj[node]){
        int edgeweight=it[1];
        int adjnode=it[0];
        if(dis+edgeweight<dist[adjnode])    {

            dist[adjnode]=dis+edgeweight;
            pq.push({dist[adjnode],adjnode});

        }
    }
}
return dist;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int v;
    vector<vector<int>>adj;
    int s;
    set<pair<int,int>>st;
    vector<int>dis(v,1e9);

    st.insert({0,s});

    dis[s]=0;

    while(!st.empty()){
        int it=*(st.begin());
        int node=it.second;
        int dist=it.first;

        st.erase(it);

        for(auto it:adj[node]){
            int adjnode=it[0];
            int 
        }
    }

}