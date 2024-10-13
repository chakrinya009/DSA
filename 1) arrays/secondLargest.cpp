#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{2,1,4,6,4,3};
    int largest=v[0];
    int secLargest=0;
    for(int i=0;i<v.size();++i){
        if(largest<v[i]){
            secLargest=largest;
            largest=v[i];
        }else if(secLargest<v[i]&&largest!=v[i]){
            secLargest=v[i];
        }
    }

    cout<<largest<<" "<<secLargest;
}