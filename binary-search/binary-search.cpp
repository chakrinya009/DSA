#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5,9,6,7,10};
    int k=1;
    int l=0,h=v.size(),mid=l+(h-l)/2;
    while(l<=h){
        mid=l+(h-l)/2;
        if(v[mid]==k){
            // cout<< mid;
            cout<<mid+1;
            break;
        }
        else if(v[mid]>k){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return 0;
}