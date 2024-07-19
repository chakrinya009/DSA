#include<bits/stdc++.h>
using namespace std;

int palindrome(string s,int start,int end){
   if(start>=end){
        return 1;
    }
    if(s[start]!=s[end]){
        return 0;
    }
   
    return palindrome(s,start+1,end-1);
}

int main(){

    string s="abcba";
    int n=s.size()-1;
   cout<< palindrome(s,0,n);

}