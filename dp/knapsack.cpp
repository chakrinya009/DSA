// #include<bits/stdc++.h>
// using namespace std;

// int knapsack(vector<int> wt,vector<int> val,int w,int n){
//     if(n==0||w==0){
//         return 0;
//     }
//     if(w<wt[n-1]){
//         return knapsack(wt,val,w,n-1);
//     }

//     else {
//         return max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
//     }
// }

// int main(){

//     vector<int> wt={1,2,4,3,5};
//     vector<int>val={10,11,13,4,6};
//     cout<<knapsack(wt,val,4,5);

// }

#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int> wt={1,2,4,3,5};
     vector<int>val={10,11,13,4,6};
     int n=wt.size();
     int w=4;// bag weight
     int dp[n+1][w+1];
     for(int i=0;i<=n;++i){
        for(int j=0;j<=w;++j){
            if(i==0||j==0){
                dp[i][j]=0;
            }
        }
     }

     for(int i=1;i<=n;++i){
        for(int j=1;j<=w;++j){
            if(wt[i-1]<=j){
              dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
     }
     cout<< dp[n][w];
}