#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next=NULL;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    } 
};
void size(node*&head)
{
   int cnt=0; node*temp=head;
   while(temp!=NULL)
   {
       temp=temp->next;
       cnt=cnt+1;
   }
   cout<<" the size of the node: "<<cnt;
}
void print(node*&head)
{   int cmt=0;
    for (node*temp=head;temp!=NULL;temp=temp->next)
    {
          cout<<temp->data<<endl;
          cmt+=1;
    }
    cout<<cmt;
}
void print1(node*head)
{
    node*temp1=head; int third ;
    while(temp1!=NULL)
    {
      cout<<temp1->next->next->data;
      (temp1->next->next->data)++;
    }
}
int main()
{   node*node1=new node(2);
    node*node2=new node(3);
    node*node3=new node(4);
    node*head=node1;
    node1->next=node2;
    node2->next=node3;
    // cout<<node2->next<<endl<<node3<<endl; to check address 
    // cout<<head->next->next->data<<endl;  yes possible 
     
    print1(head);
    // print(head);
    // size(head);
    



      
    return 0;
}