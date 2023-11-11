#include<stdio.h>
#include<stdlib.h>

struct node* deleteFromBeginning(struct node* head);
struct node* deleteFromLast(struct node* head);

//to create node
struct node
{
	int data;
	struct node *next;
	int *p;
};
//To display linklist
void tra(struct node*ptr)
{ 
	while(ptr!=0) {
	printf("\nvalue is %d",ptr->data);
	ptr=ptr->next;
	}
}//insert at first
struct node*insertatfirst(struct node *head,int data)
{
struct node*ptr=(struct node*)malloc(sizeof(struct node));
	ptr->next=head;
	ptr->data=data;
	return ptr;
}
//insert at between
struct node*insertatbtw(struct node*head,int data,int index)
{
struct node*ptr=(struct node*)malloc(sizeof(struct node));
struct node*p=head;
int i=0;
while(i!=index-1)
{
	p=p->next;
	i++;
}
	ptr->data=data;
	ptr->next=p->next;
	p->next=ptr;
	return head;	
}
//insert at end
struct node*insertatend(struct node*head,int data)
{
struct node*ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=data;
struct node*p=head;

while(p->next!=NULL){
	p=p->next;
	}
p->next=ptr;
ptr->next=0;
return head;	
}

// Delete the first node
struct node* deleteFromBeginning(struct node* head)
{
    if (head == NULL)
        return NULL;

    struct node* temp = head;
    head = head->next;
    free(temp);

    return head;
}

// Delete the last node
struct node* deleteFromLast(struct node* head)
{
    if (head == NULL)
        return NULL;

    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    struct node* temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;

    free(temp->next);
    temp->next = NULL;

    return head;
}

int main()
{
struct node *head;
struct node *second;
struct node *third;
struct node*fourth;
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));
head->data=4;
head->next=second;
second->data=8;
second->next=third;
third->data=10;
third->next=fourth;
fourth->data=16;
fourth->next=NULL;
printf("created nodes:");
tra(head);
printf("\ninsertion at first");
head=insertatfirst(head,40);
tra(head);
printf("\ninsertion at between");
head=insertatbtw(head,26,2);
tra(head);
printf("\ninsertion at end");
head=insertatend(head,6);
tra(head);
printf("\ndeletion from beginning");
head = deleteFromBeginning(head);
tra(head);
printf("\ndeletion from last");
head = deleteFromLast(head);
tra(head);

return 0;
}

