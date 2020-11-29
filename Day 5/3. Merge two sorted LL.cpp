#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

void push(Node** head, int data)
{
    Node *new_node=new Node;
    new_node->data=data;
    new_node->next=*head;
    
    *head=new_node;
}

void printList(Node *head)
{
    Node *d=head;
    while(d!=NULL)
    {
        cout<<d->data<<" ";
        d=d->next;
    }
}

Node* mergeSort(Node *head, Node *second, Node *sorted)
{
    if(head==NULL) return second;
    if(second==NULL) return head;
    Node *a=head, *b=second;
    if(a->data >= b->data)
    {
        sorted=b;
        b=b->next;
    }
    else
    {
        sorted=a;
        a=a->next;
    }
    Node *d=sorted;
    while(a && b)
    {
        if(a->data >= b->data)
        {
            d->next=b;
            d=b;
            b=b->next;
        }
        else
        {
            d->next=a;
            d=a;
            a=a->next;
        }
    }
    if(a==NULL) d->next=b;
    if(b==NULL) d->next=a;
    return sorted;
}

int main()
{
	Node *head=NULL, *second=NULL;
	push(&head,9);
	push(&head,7);
	push(&head,5);
	//printList(head);
	push(&second,10);
	push(&second,8);
	push(&second,4);
	push(&second,3);
	//printList(second);
	Node *sorted=NULL;
	sorted=mergeSort(head,second,sorted);
	printList(sorted);
}
