//smallest element greater than key

#include<bits/stdc++.h>
using namespace std;

int findCeil(vector<int>v,int key){
    int l=0,h=v.size()-1,mid,result;
    while (l<=h)
    {
        /* code */
        mid=l+(h-l)/2;
        if(v[mid]==key){
            return mid;
        }else if(v[mid]>key){
            result=mid;
            h=mid-1;
        }else{
            l=mid+1;
        }
    }
    return result;
}

int main(){
    vector<int>v{1,2,3,5,6,7};
    cout<<findCeil(v,4);
}