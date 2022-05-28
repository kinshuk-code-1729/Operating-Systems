// Program for MVT Memory Management
#include<stdio.h>
int main(){
	int tot,m,n,i,s[20];
	printf("Enter Total Memory Size : ");
	scanf("%d",&tot);
	printf("\nEnter no. of processes : ");
	scanf("%d",&n);
	printf("\nEnter Memory for OS : ");
	scanf("%d",&m);
	tot -= m;
	for(i = 0; i < n; i++){
		printf("\nEnter size for process %d : ",i+1);
		scanf("%d",&s[i]);
	}
	for(i = 0; i < n; i++){
		if(tot >= s[i]){
			printf("\nMemory Allocated to Process %d",i+1);
			tot = tot - s[i];
		}
		else printf("\nProcess %d is blocked",i+1);
	}
	printf("\nExternal Fragmentation = %d",tot);
}