#include<iostream>
using namespace std;

// class Node{
//     public:
//      Node *next;
//      int val;   
// };

// 01100010

int main(){
  Node * p1=A;
  Node * p2=A;
  while (p1!=NULL)
  {
    if(p1->val=0){
        swap(p1->val,p2->val);
        p2=p2->next;
    }
    p1=p1->next;
  }
  
}