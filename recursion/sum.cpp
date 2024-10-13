#include<bits/stdc++.h>
using namespace std;

int fun(int n){
    if(n==0){
        return 0;
    }
    return fun(n-1)+n;
}


int main(){

    int n=10;

    cout<<fun(n);

}
