// the element that supposed to be at ith position will be at i-1th , ith and i+1th position

#include<bits/stdc++.h>
using namespace std;

int search(vector<int> &arr,int target)
{
    int n = arr.size();
    int start = 0,end =n-1;
    
    while(start<=end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid]==target)
            return mid;
        
        if(mid-1>=start && arr[mid-1]==target)
            return mid-1;
        else if(mid+1<=end && arr[mid+1]==target)
            return mid+1;
        else
        {
            if(target<arr[mid])
                end=mid-2;
            else 
                start = mid+2;
        }
    }
    return -1;
}

int main(){
    vector<int>v{1,2,4,3,5};
cout<<search(v,2);
}