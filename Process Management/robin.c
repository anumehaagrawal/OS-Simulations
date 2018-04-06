#include<stdio.h>
#include<stdlib.h>
int main(){
	int time=0;
	int arr[5],burst[5];
	int q=2;
	for(int i=0;i<5;i++){
		arr[i]=i;
	}
int ready_queue[5]={0};
int flag[5];
int temp=0;
	for(int i=0;i<5;i++){
		int num;
		scanf("%d",&num);
		burst[i]=num;
		temp=temp+num;
		flag[i]=0;
		

	}
	printf("%d\n",temp );
	
	int sum=0;
	int comp[5];
	

	while(sum<temp){
		for(int i=0;i<5;i++){
			if(burst[i]-q>=0 && flag[i]==0){
				//ready_queue[i]=ready_queue[i]+q;
				sum=sum+q;
				
				burst[i]=burst[i]-q;
			}
			else if(flag[i]==0){
				//ready_queue[i]=ready_queue[i]+burst[i];
				sum=sum+burst[i];
				comp[i]=sum;
				flag[i]=1;
			}
			
		}
	}
	for(int i=0;i<5;i++){
		printf("%d\n",comp[i] );
	}


}