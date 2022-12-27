#include<stdio.h>
int main(){
    int i=1,n,F0=0,F1=1,F2=1;
    printf("Enter the value of n  ");
    scanf("%d",&n);
    printf("the series will be like this ");
    while (i<=n)
    
    { 
      printf("%3d",F0); 
       F2=F0+F1;
       F0=F1;
       F1=F2; 
       i++;

    }
     printf("\nFn = %d",F1-F0);
     
    return 0;
}
