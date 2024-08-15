// greatest element smaller than key

#include<bits/stdc++.h>
using namespace std;
int findFloor(vector<int>v,int key){
    int l=0,n=v.size(),h=n-1,mid,result;
    while (l<=h)
    {
        /* code */
        mid=l+(h-l)/2;
        if(v[mid]==key){
            return mid;
        }else if(v[mid]<key){
             result=mid;
             l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return result;
}
int main(){
    vector<int>v{1,2,3,5,6};
    cout<<findFloor(v,4);
}