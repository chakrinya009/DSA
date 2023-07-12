// finding the single number from the array which consits of the 3 same numbers like {1,1,1,2,2,2,3,3,3,4} find that one unique number



#include<iostream>
#include<vector>
using namespace std;
int findSingle(vector<int>&v){
  int ans=0;                                     // for storing the ans
  int countODD=0;                         // for odd count
  int countEVEN=0;                        // for even count
  for(int i=0;i<32;++i){                      // looping the each bit
    countEVEN=0;
    countODD=0;
    for(int j=0;j<v.size();++j){
        if((1<<i)&v[j]){
           countODD++;
        }else{
            countEVEN++;
        }
    }
    if(countODD%3){
        ans=ans|(1<<i);
    }
  }
  return ans;
}
int main(){
    vector<int>v={1,1,1,2,2,2,3,3,3,4};
    cout<<findSingle(v);
}