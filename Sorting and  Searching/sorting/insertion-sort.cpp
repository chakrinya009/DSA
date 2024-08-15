#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{4,2,5,1,7,6,3};
    int n=v.size();
    for(int i=1;i<n;++i){
        int j=i;
        while (j>0&&v[j-1]>v[j])
        {
            /* code */
            swap(v[j],v[j-1]);
            j--;
        }
        
    }

    for(int i:v){
        cout<<i<<" ";
    }

}