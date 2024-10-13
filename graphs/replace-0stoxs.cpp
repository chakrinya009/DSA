//replace 0s to xs
#include<bits/stdc++.h>
using namespace std;

void dfs(int r,int c,vector<vector<int>>vis,vector<vector<char>>mat,int delrow[],int delcol[]){
    vis[r][c]=1;
    int n=mat.size();
    int m=mat[0].size();


    //check for top,right,left,bottom

    for(int i=0;i<4;i++){
        int nrow=r+delrow[i];
        int ncol=c+delcol[i];

        if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&!vis[nrow][ncol]&&mat[nrow][ncol]=='0'){

            dfs(nrow,ncol,vis,mat,delrow,delcol);

        }
    }

}

int main(){
    vector<vector<char>>mat;
    int n,m;
    int delrow[]={1,0,-1,0};
    int delcol[]={0,1,0,-1};
    vector<vector<int>>vis(n,vector<int>(m,0));
    for(int j=0;j<m;j++){
        if(!vis[0][j]&&mat[0][j]=='0'){
            dfs(0,j,vis,mat,delrow,delcol);
        }

        if(!vis[n-1][j]&&mat[n-1][j]=='0'){
            dfs(n-1,j,vis,mat,delrow,delcol);
        }
    }
    for(int i=0;i<n;i++){
        if(!vis[i][0]&&mat[i][0]=='0'){
            dfs(i,0,vis,mat,delrow,delcol);
        }
        if(!vis[i][m-1]&&mat[i][m-1]=='0'){
            dfs(i,m-1,vis,mat,delrow,delcol);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;++j){
            if(!vis[i][j]&&mat[i][j]=='0'){
                mat[i][j]='x';
            }
        }
    }
}