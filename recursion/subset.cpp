#include<bits/stdc++.h>
using namespace std;

// void subsets(vector<int> v,vector<int>temp,int i){
//     if(v.size()==i){
//      for(int i:temp){
//         cout<<i;
//      }
//      cout<<endl;
//      return;
//     }

//   temp.push_back(v[i]);
//   subsets(v,temp,i+1);
//   temp.pop_back();
//   subsets(v,temp,i+1);

// }

// int main(){
//     vector<int> v{1,2,3};
//     vector<int> temp;
//     subsets(v,temp,0);
// }

void subsets(vector<int>v,vector<int>temp,int i){
  if(v.size()==i){
    for(int i:temp){
      cout<<i;
    }
    cout<<endl;
    return;
  }

  temp.push_back(v[i]);
  subsets(v,temp,i+1);
  temp.pop_back();
  subsets(v,temp,i+1);
}

int main(){
  vector<int>v{1,2,3};
  vector<int>temp;
  subsets(v,temp,0);
}