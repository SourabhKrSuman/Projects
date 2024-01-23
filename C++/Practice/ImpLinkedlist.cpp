#include<iostream>
using namespace std;

main()
{
struct node
{
    int data;
    node *next;
};
node *head,*newnode,*temp;
head=0;
bool choice;
while (choice)
{
newnode=(node*) malloc(sizeof(node));
cout<<"Enter a value: ";
cin>>newnode->data;
newnode->next=0;
if(head==0)
head=temp=newnode;
else
{
    temp->next=newnode;
    temp=newnode;
}
cout<<"\nTo continue press 1 else 0: ";
cin>>choice;
}
temp=head;
cout<<"\nLinked list element is: ";
while(temp!=0)
{
    cout<<temp->data<<' ';
    temp=temp->next;
}
}
