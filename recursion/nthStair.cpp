//count ways to reach the nth stair  (visulize like steps )( can jump 1 or 2 steps)

#include<bits/stdc++.h>
using namespace std;

int fun(int n){
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }

    return fun(n-1)+fun(n-2);
}

int main(){
    int n=6;
    cout<<fun(n);
}