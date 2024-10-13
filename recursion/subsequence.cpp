// program to find all the subsequence from the string

#include<bits/stdc++.h>
using namespace std;

// void subsequence(string s,string temp,int i){
//     if(s.size()==i){
//         cout<<temp<<" ";
//         return;
//     }
//     subsequence(s,temp+s[i],i+1);

//     subsequence(s,temp,i+1);

// }

// int main(){
//     string s="abc";
//     int i=0;
//     string temp=" ";
//     subsequence(s,temp,i);
// }

void subsequence(string s,string temp,int i){
    if(s.size()==i){
        cout<<temp<<" ";
        return;
    }

    subsequence(s,temp+s[i],i+1);
    subsequence(s,temp,i+1);

}

int main(){
    string s="abc";
    int i=0;
    string temp=" ";
    subsequence(s,temp,i);
}
