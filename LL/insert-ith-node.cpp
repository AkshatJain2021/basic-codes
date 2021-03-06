#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node * next;
  Node(int data)
  {
      this->data=data;
      next=NULL;
  }
};
Node * takeinput()
{
    int data;
    cin>>data;
    Node * head=NULL;
    Node * tail=NULL;
    while(data!=-1)
    {
        Node * newnode=new Node(data);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
    
}
void print(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<' ';
        temp=temp->next;
    }
}
Node * insertnode(Node *head,int i,int number)
{
    int count=0;
    Node *temp=head;
    Node *newnode=new Node(number);
    if(i==0)
    {
        newnode->next=head;
        head=newnode;
        return head
    }
    while(temp!=NULL and count<i-1)
    {
        temp=temp->next;
        count++;
    }
    if(temp!=NULL){
    newnode->next=temp->next;
    temp->next=newnode;
    }
    return head;
}
int main()
{
    int i,number;
    Node *head=takeinput();
    cout<<"Enter the ith position"<<endl;
    cin>>i;
    cout<<"Enter the number to be inserted at ith position"<<endl;
    cin>>number;
    head=insertnode(head,i,number);
    print(head);
    return 0;
}
