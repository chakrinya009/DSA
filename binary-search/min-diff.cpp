//minimum difference element in a sorted array

//we can do by finding the ceil and floor of the key and checks which is minimum
//or we can check by using minDiff , diff

#include<bits/stdc++.h>
using namespace std;

int findDiff(vector<int>v,int key){
    int l=0,h=v.size()-1,mid,minDiff=INT_MAX,diff,ans;
    while(l<=h){
        mid=l+(h-l)/2;
        diff=abs(v[mid]-key);
        if(diff<minDiff){
            minDiff=diff;
            ans=v[mid];
        }
        if(v[mid]==key){
            return v[mid];
        }
        else if(v[mid]>key){
            h=mid-1;
        }else{
            l=mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int>v{1,2,3,6,7,8};
    cout<<findDiff(v,5);
}