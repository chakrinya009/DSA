#include<bits/stdc++.h>
using namespace std;

int fun(int n){
    if(n<=0){
        return 1;
    }
    // int rec=fun(n-1);
    // int calc=rec*n;
    // return calc;
    return fun(n-1)*n;
}

int main(){

  int n=4;
  cout<<fun(n);

}