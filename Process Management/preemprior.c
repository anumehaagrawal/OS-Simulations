#include<stdio.h>
#include<stdlib.h>
int main(){
	int arr[4],burst[4],prior[4],comp[4];
	for(int i=0;i<4;i++){
		int t;
		scanf("%d",&t);
		arr[i]=t;
	}
	for(int i=0;i<4;i++){
		int t,x;
		scanf("%d %d",&t,&x);
		prior[i]=t;
		burst[i]=x;
	}
	int curr=arr[0];
	int count=0;
	for(int i=0;i<3;i++){
		if(prior[curr]>prior[i]){
			
			if(burst[i]-curr-arr[i]>0){
				burst[i]=burst[i]-curr-arr[i];
				count=count+curr-arr[i];

			}
			else{
				burst[i]=0;
				count=count+burst[i];
				comp[i]=count;
				curr=arr[i+1]
			}
			curr=arr[i+1];

			
		}

	}
	for(int i=0;i<4;i++){
		printf("%d %d  \n",arr[i],burst[i]);
	}
}
