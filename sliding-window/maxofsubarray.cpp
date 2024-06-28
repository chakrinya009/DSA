#include<bits/stdc++.h>
using namespace std;
void findMaxno(vector<int>a,int k){
    int i=0,j=0,maxnum=0,n=a.size();
    vector<int> ans;
    while (j<n)
    {
        /* code */
        maxnum=max(maxnum,a[j]);
        if(j-i+1<k){
            j++;

        }
        else if(j-i+1==k){
           ans.push_back(maxnum);
           if(maxnum==a[i]){
            maxnum=0;
           }
           i++;
           j++;
        }
    }

    for(auto i:ans){
        cout<<i<<" ";
    }
    
}
int main(){
    vector<int> arr={3,2,1,-4,5,6};
    int k=3;
    findMaxno(arr,k);
}