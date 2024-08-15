#include<bits/stdc++.h>
using namespace std;
int nextAlpha(vector<char>v,char c){
  int l=0,h=v.size()-1,mid,result;
  while(l<=h){
    mid=l+(h-l)/2;
    if(v[mid]>c){
      result=mid;
      h=mid-1;
    }else{
        l=mid+1;
    }
  }
  return result;
}
int main(){
    vector<char>v{'a','b','c','d','e','f'};
    cout<<nextAlpha(v,'c');
}