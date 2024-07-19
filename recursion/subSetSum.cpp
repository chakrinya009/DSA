// sub set sum problem (if we need the count then use the "+" operator instead "or" )

#include<bits/stdc++.h>
using namespace std;

int subsetsum(vector<int>v,int k,int sum,int i){

    if(sum==k){
        return 1;
    }
    if(i>=v.size() || sum>k){
        return 0;
    }

    return subsetsum(v,k,sum+v[i],i+1)+subsetsum(v,k,sum,i+1);

}

int main(){
    vector<int> v{3,34,12,4,5,2};
    int k=9;
    int sum=0;
    
    cout<<subsetsum(v,k,sum,0);
}