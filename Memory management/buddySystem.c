#include<stdio.h>
#include<stdlib.h>
int main(){
	int l=32;
	int files[32]={0};
	for(int i=0;i<5;i++){
		l=32;
		int a;
		scanf("%d",&a);
		while(l>=a){
			if(a>l/2){
				int x=32/l;
				int temp=x;
				while(temp<2*x && files[2*temp]==0){
					if(files[temp]==0){
						files[temp]=a;
						printf("Node number %d has %d",temp,a);
						break;
					}
					else{
						temp++;
					}
				}
				l=l/2;
				
			}
		else{
			l=l/2;
		}

		}

	}



}