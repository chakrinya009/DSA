#include<bits/stdc++.h>
using namespace std;

int bs(vector<int>v,int l,int h,int key){
    int mid;
  while(l<=h){
    mid=l+(h-l)/2;
    if(v[mid]==key){
        return mid;
    }
    else if(v[mid]>key){
        h=mid-1;
    }else{
        l=mid+1;
    }
  }
}
int main(){
    vector<int>v{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    int l=0,h=1;
    int key=8;
    while(key>v[h]){
        l=h;
        h=h*2;
    }
    cout<<bs(v,l,h,key);
}