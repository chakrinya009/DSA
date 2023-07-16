#include<iostream>
using namespace  std;
int main(){
    Node *fast=head;
    Node *slow=head;
    bool cycleFound;
    while (fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            cycleFound=true;
        }
    }

    if(!cycleFound){
        return NULL;
    }

    // if cycle is found move the both pointers one step , finally you will reach the start of the cycle  ( shift any pointer to head )

    fast=head;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    
}