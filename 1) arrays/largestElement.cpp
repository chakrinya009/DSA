#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{3,1,5,4,2};
    int maxi=v[0];
    for(int i:v){
        if(maxi<i){
            maxi=i;
        }
    }

    cout<<maxi;
}

// in recursion