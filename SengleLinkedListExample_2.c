/* Single Linked List Example */
#include<stdio.h>
#include<process.h>
#include<malloc.h>
/*Node structure*/
typedef struct nt
{
	int data;
	struct nt *next;
} Node;
#define TOTAL_MENU 8
int menu()
{
	char mItems[TOTAL_MENU][30]={"Insert At First","Insert At Specific Location","Insert At Last","Display List","Delete First","Delete Specific","Delete Last","Exit"};
	int i,choice;
	printf("\n\t\tMenu\n");
	for(i=1;i<40;i++)printf("=");
	for(i=0;i<TOTAL_MENU;i++)printf("\n%2d. %s",i+1,mItems[i]);
	printf("\n");
	for(i=1;i<40;i++)printf("=");
	do
	{
		printf("\nEnter you choice:");
		scanf("%d",&choice);
		if(choice>0&&choice<=TOTAL_MENU)return choice;
		printf("\nNot a valid choice entered!!!");
	}while(1);
}

int main()
{
	Node *start=NULL;
	Node *nnode=NULL;
	Node *cnode=NULL;
	int newData;
	
	do
	{
		switch(menu())
		{
			case 1://insert at first
				printf("\nUnder Development");
				break;
			case 2://insert at specific Location
				printf("\nUnder Development");
				break;
			case 3://insert at last
				//1. create a new node
				nnode=(Node*)malloc(sizeof(Node));
				if(nnode==NULL)
				{
					printf("\n Unable to allocate memory fro new node.");
					break;
				}
				//accept data from user
				printf("Enter new data:");
				scanf("%d",&newData);
				//put new data in data part and NULL in address part of new node
				nnode->data=newData;
				nnode->next=NULL;
				//now add new node in list
				//if list is empty the make new node firt node
				if(start==NULL)
				{
					start=nnode;
				}
				else
				{
					//list is not empty
					//find the address of last node of list
					cnode=start;
					while(cnode->next!=NULL)cnode=cnode->next;
					
					//put the address of new node in addrress part of last node
					cnode->next=nnode;
				}
				nnode=NULL;
				printf("\nNode added successfully at end of list.");
				
				break;
			case 4://display list
				if(start==NULL)
				{
					printf("\nList is empty!");
					break;
				}
				printf("\nList:");
				cnode=start;
				while(cnode!=NULL)
				{
					printf("%d, ",cnode->data);
					//move cnode on next node
					cnode=cnode->next;
				}
				break;
			case 5://delete 1st element
				printf("\nUnder Development");
				break;
			case 6://selete specific element
				printf("\nUnder Development");
				break;
			case 7://delete last element
				printf("\nUnder Development");
				break;
			case 8:exit(0);	
		}	
	}while(1);
}
