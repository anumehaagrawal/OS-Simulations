#include<stdio.h>
#include<stdlib.h>
struct node{
	int size;
	int free;
	int p_id;
	struct node *next;
};
int main(){
	int files[5];
	struct node * temp, *last_alloc, *head;
	for(int i=0;i<5;i++){
		scanf("%d",&files[i]);
	}
	temp=(struct node *)malloc(sizeof(struct node));
	temp->size=100;
	temp->free=0;
	temp->p_id=0;
	temp->next=NULL;
	last_alloc=temp;
	head=temp;
	for(int i=0;i<5;i++){
		if(head->size>files[i]){
			head->size=head->size-files[i];
			temp=(struct node *)malloc(sizeof(struct node));
			temp->size=files[i];
			temp->free=0;
			temp->next=NULL;
			last_alloc->next=temp;
			last_alloc=temp;

		printf("Allocated\n");
		}
		else{
			printf("Unallocated\n");
		}
	}

}