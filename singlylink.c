#include "stdio.h"
struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node *temp,*temp1,*top;
	int i,j,a,k;
	do
	{
		printf("1.insert node at first\n");
		printf("2.insert node at last\n");
		printf("3.insert node in middle\n");
		printf("4.delete first node\n");
		printf("5.delete last node\n");
		printf("6.delete in between node\n");
		printf("7.Display\n");
		printf("8.reverse data\n");
		printf("enter your choice\n");
		scanf("%d",&i);
		switch(i)
		{
		case 1:temp=(struct node*)malloc(sizeof(struct node));
		printf("enter the value\n");
		scanf("%d",&a);
		   temp->data=a;
		   temp->next=NULL;
		      if(top==NULL)
		        {
			       top=temp;
		         }
		     else
		         {
			       temp->next=top;
			       top=temp;

		          }
		break;

		case 2: temp=(struct node*)malloc(sizeof(struct node));
		printf("enter the value\n");
		scanf("%d",&a);
		   temp->data=a;
		   temp->next=NULL;
		   temp1=top;
		    while(temp1->next!=NULL)
		       {
			      temp1=temp1->next;
		       }
		           temp1->next=temp;
		break;

		case 3: temp=(struct node*)malloc(sizeof(struct node));
		printf("enter the value\n");
		scanf("%d",&a);
		   temp->data=a;
		   temp->next=NULL;
		printf("enter data after which you want to add node\n");
		scanf("%d",&j);
		    temp1=top;
		    while(temp1->data!=j)
		       {
			      temp1=temp1->next;
		       }
		       temp1->next=temp;
		break;

		case 4:temp1=top;
		top=temp1->next;
		free(temp1);

		break;
		case 5:temp1=top;
		while(temp1->next!=NULL)
		   {
			   temp1=temp1->next;
		   }
		      free(temp1);

		break;

		case 6:
			temp1=top;
		     while(temp1->next!=NULL)
		        {
			       printf("%d",temp1->data);
		         }
		           printf("%d",temp1->data);
		        }
		       printf("enter 1 to continue\n");
		       scanf("%d",&k);
	}while(k==1);
}
