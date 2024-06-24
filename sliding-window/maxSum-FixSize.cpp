#include<bits/stdc++.h>
using namespace std;
int findMaxSum(vector<int> &a,int k){
   int n=a.size();
   int i=0,sum=0,maxSum=0,j=0;
   while(j<n){
    sum=sum+a[j];
    if(j-i+1<k){
        j++;
    }
    else if(j-i+1==k){
        maxSum=max(maxSum,sum);
        sum=sum-a[i];
        i++;
        j++;
    }
   }
   return maxSum;
}
int main(){
    vector<int> arr={1,2,3,4,5};
    int k=3;
   cout<< findMaxSum(arr,k);
}