#include<iostream>
using namespace std;
class node
{ public:
    int data;
    node*next;
    node(int data)
    { this->data=data;
     this-> next=NULL;
    }

};
void print(node*head)
{   // print for data element using linkedlist
    node*temp=head;
    // while(temp!=NULL)
    // {
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
         
    // }  
    // also we can print for loop
    for (temp;temp!=NULL;temp=temp->next)
    {
        cout<<temp->data<<" ";
    }

}
int main()
{   
node* node1 = new node(100);
int n=5;
   while(n>0)
   {
       int c;
       cin>>c;
       node* node1 = new node(c);
       n--;
   }
// now the time is to link:-
//1->2
node1->next = node2;
//2->3
node2->next=node3;

 //3->4
 node3->next=node4;

// 4->5
node4->next=node5;
// 5->6
node5->next=node6;
print(node1);
 cout<<" the node of next adress "<<node1->next<<" "<<node2;
     
    return 0;
}
