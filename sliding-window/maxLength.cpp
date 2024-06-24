#include<bits/stdc++.h>
using namespace std;
int maxLen(vector<int>a,int sum){
    int n=a.size();
    int i=0,j=0,maxLen=0,k=0;
    while(j<n){
       k=k+a[j];
       
       while (k>sum){
        k=k-a[i];
        i++;
       }
       
       if(k<=sum){
        maxLen=max(maxLen,j-i+1);
        j++;
        
       }
    }
    return maxLen;
}
int main(){
    vector<int> arr={1,2,3,4,5};
    int sum=6;
    cout<<maxLen(arr,sum);
}