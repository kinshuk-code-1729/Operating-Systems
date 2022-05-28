// MFT Memory Management Technique
#include<stdio.h>
int main(){
    int tot,i,ps[20],n,size,m,intr = 0;
    printf("Enter size of memory : ");
    scanf("%d",&tot);
    printf("\nEnter memory for OS : ");
    scanf("%d",&m);
    printf("\nEnter no.of partitions to be divided : ");
    scanf("%d",&n);
    tot -= m;
    size = tot / n;
    for(i = 0 ; i < n ; i++){
        printf("\nEnter process size : ");
        scanf("%d",&ps[i]);
        if(ps[i] <= size){
            intr += size - ps[i];
            printf("\nprocess %d is allocated\n",i+1);
        }
        else  printf("\nprocess%d is blocked",i+1);
    }
    printf("\nTotal internal fragmentation is %d",intr);
    return 0; 
}