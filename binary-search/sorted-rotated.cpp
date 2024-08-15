// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>v{11,22,33,44,0,1,2,3,4,5,6,7,8,9};
//     int l=0,h=v.size()-1,mid=0,prev,next,n=v.size();
    
//     while (l<=h)
//     {
//         /* code */
//         mid=l+(h-l)/2;
//         next=(mid+1)%n;
//         prev=(mid-1+n)%n;
//         if(v[prev]>v[mid] && v[next]>v[mid]){
//           cout<<mid;
//           break;
//         }
//         if(v[0]<v[mid]){
//             l=mid+1;
//         }
//         else{
//             h=mid-1;
//         }
//     }
    
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{11,22,33,44,55,0,1,2,3,4,5,6,7,8,9};
    int l=0,h=v.size()-1;
    int mid;
    while(l<h){
        mid=l+(h-l)/2;
        if(v[mid]>v[h]){
            l=mid+1;
        }else{
            h= mid-1;
        }
    }
    cout<<mid;
    return 0;
}