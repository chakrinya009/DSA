#include<bits/stdc++.h>
using namespace std;
void findneg(vector<int>a,int k){
    int n=a.size();
    int i=0,j=0;
    queue<int>temp;
    vector<int>ans;
    while (j<n)
    {
        /* code */
        if(a[j]<0){
            temp.push(a[j]);
        }
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            ans.push_back(temp.front());
            if(a[i]==temp.front()){
                temp.pop();
            }
            j++;
            i++;
        }
    }
for(auto i:ans){
    cout<<i<<" ";
}

    
}
int main(){
    vector<int> arr={-1,2,-2,-3,-4,2,3,4,5};
    int k=3;
    findneg(arr,k);
}