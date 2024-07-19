#include<bits/stdc++.h>
using namespace std;
int firstoccur(int l,int h,int mid,int k,int firstoccu,vector<int> v){
    while(l<=h){
        mid=l+(h-l)/2;
        if(v[mid]==k){
            firstoccu=mid;
            h=mid-1;
        }
        else if(v[mid]>k){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return firstoccu;
}

int lastoccur(int l,int h,int mid,int k,int lastocuu,vector<int> v){
    while(l<=h){
        mid=l+(h-l)/2;
        if(v[mid]==k){
            lastocuu=mid;
            l=mid+1;
        }
        else if(v[mid]>k){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return lastocuu;
}
int main(){
    vector<int> v{1,3,4,5,6,6,6,7};
    int l=0,h=v.size()-1,k=6,mid=0,lastocuu=0,firstoccu=0;
    cout<<firstoccur(l,h,mid,k,firstoccu,v)<< " "<<lastoccur(l,h,mid,k,lastocuu,v);
}