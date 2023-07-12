#include<iostream>
#include<vector>
using namespace std;

void findunique(vector<int>&v){
    int ans=0;
    for(int i:v){
      ans^=i;              // in array of [1,2,1,2,3,4] from xor we get 7-> 111
    }

    ans=ans& ~(ans-1);      // by doing this ans-1=6 -> 110 apply negotiation we get 001
                            // then and operation of both ans and ~(ans-1) is 001

     // from this right most bit we can identify the two numbers

     int set1=0;
     int set2=0;

     for(int i:v){
        if(i&ans){
            set1^=i;
        }
        else{
            set2^=i;
        }
     }

     cout<<set1<<" and "<<set2;


}

int main(){
  vector<int> v{1,2,1,2,3,4};
  findunique(v);
}