#include<stdio.h>
#include<stdlib.h>
int main(){
	int arr[4],burst[4],comp[4];
	for(int i=0;i<4;i++){
		int t;
		scanf("%d",&t);
		arr[i]=t;
	}
	for(int i=0;i<4;i++){
		int t;
		scanf("%d",&t);
		burst[i]=t;
	}
	for (int i = 0; i < 3; i++)
	{
		for(int j=0;j<3-i;j++)
			if(burst[j]>burst[j+1] && arr[j]==arr[j+1]){
				int temp;
				temp=burst[j];
				burst[j]=burst[j+1];
				burst[j+1]=temp;
				
			}
	}
	int start=0;
	for(int i=0;i<4;i++){
		comp[i]=start+burst[i];
		printf("%d and its completed in %d\n",arr[i],comp[i] );
		start=comp[i];
	}
}