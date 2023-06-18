#include<iostream>
#include<vector>
using namespace std;

//  by using xor operation we can get unique number from an array
//  we can get unique number by using map but it takes some space
// array consists of [1,1,2,2,3] 3 is the only single number

int singleNum(vector<int>&v){
    int x=0;
 for(int i:v)  {
   x^=i;
 }
 return x;
}
int main(){
    vector<int>v={1,2,1,2,4};
    cout<<singleNum(v);
}