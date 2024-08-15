// #include<bits/stdc++.h>
// using namespace std;

// int subsetsum(vector<int>v,int k,int n){
//     if(k==0){
//         return 1;
//     }
//     if(n==0 ){
//         return 0;
//     }
//     return subsetsum(v,k-v[n-1],n-1) + subsetsum(v,k,n-1);
// }
// int main(){
//     vector<int>v={2,1,3,4,5};
//     int k=3;
//     int n=v.size();
//    cout<< subsetsum(v,k,n);
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,1,3,4,5};
    int k=3;
    int n=v.size();
    int dp[n+1][k+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=k;j++){
            if(i==0){
                dp[i][j]=0;
            }
            if(i==0&&j==0){
                dp[i][j]=1;
            }
            if(j==0){
                dp[i][j]=1;
            }
        }
    }

    for(int i=1;i<=n;++i){
        for(int j=1;j<=k;++j){
            if(v[i]>j){
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j-v[i]]+dp[i-1][j];
            }
            
        }
    }
    cout<<dp[n][k];
}