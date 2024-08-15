//count the negative elements in a sorted array

#include<bits/stdc++.h>
using namespace std;

int getNegativeNumbersCount(vector<int> &arr) {
	int l=0,h=arr.size()-1,mid;
	if(arr[0]>=0){
		return 0;
}
	if(arr[arr.size()-1]<0){
      return arr.size();
	}
	
	while(l<=h){
      mid=l+(h-l)/2;
		if(arr[mid]<0&&arr[mid+1]>=0){
            return mid+1;
		}else if(arr[mid]>0){
            h=mid-1;
		}else{
           l=mid+1;
		}
	}
}

int main(){
    vector<int>v{-5 ,-3 ,-2 ,3 ,4 ,6 ,7 ,8};
    
   cout<< getNegativeNumbersCount(v);
   
}