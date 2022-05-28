// Program to demonstrate the Round-Robbin CPU Scheduling
#include<stdio.h>
int main(){
    int et[20],TQ,n,i,x=0,tot=0;
    char prcs[5][5];
    printf("Enter total no. of processes : ");
    scanf("%d",&n);
    printf("\nEnter Time Quantum Value : ");
    scanf("%d",&TQ);
    for (i = 0; i < n; i++){
        printf("\nEnter Process name and estimated time : ");
        scanf("%s %d",&prcs[i],&et[i]);
    }
    printf("\nThe processes are ........\n");
    for (i = 0; i < n; i++) printf("\nProcess %d: %s\n",i+1,prcs[i]);
    for (i = 0; i < n; i++) tot += et[i];
    while (x != tot){
        for (i = 0; i < n; i++){
            if (et[i] > TQ){
                x += TQ;
                printf("\n%s -> %d",prcs[i],et[i]);
                et[i] -= TQ;
            }
            else if ( (et[i] <= TQ) && (et[i] != 0) ){
                x += et[i];
                printf("\n%s -> %d",prcs[i],et[i]);
                et[i] = 0;
            }
        }
    }
    printf("\nTotal Estimated time = %d",x);
    return 0;
}