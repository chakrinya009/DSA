#include<bits/stdc++.h>
using namespace std;
int countAnagrams(string str,string ptr){
    int n=str.size();
    int k=ptr.size();
    int i=0,j=0,count=0,ans=0;
    map<char,int> mp;
    for(auto l:str){
        mp[l]++;
    }
    count=mp.size();
    while (j<n){
        /* code */
       if(mp.find(str[j])!=mp.end()){

          mp[str[j]]--;
          if(mp[str[j]]==0){
            count--;
          }
       }

       if(j-i+1<k){
        j++;
       }
       else if(j-i+1==k){
        if(count==0){
            ans++;
        }
        if(mp.find(str[i])!=mp.end()){
            mp[str[i]]++;
            if(mp[str[i]]==1){
                count++;
            }
        }
        i++;
        j++;
       }
    }
    return ans;
}
int main(){
    string str="aaaa";
    string ptr="aa";
    cout<<countAnagrams(str,ptr);
}