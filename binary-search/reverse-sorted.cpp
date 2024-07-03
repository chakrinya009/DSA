#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{9,8,7,6,5,4,3,2};
    int l=0,h=v.size()-1,mid=0,k=3
    ;

    while(l<=h){
        mid=l+(h-l)/2;
        if(v[mid]==k){
            cout<<mid;
            break;
        }
        else if(v[mid]>k){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }


}