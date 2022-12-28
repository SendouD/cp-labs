#include<stdio.h>

int main(){
    int i, n, j,sum =0;
    printf("Enter a number: ");
    scanf("%d", &n);
printf("the prime numbers between %d and 1 is ",n);


    for(i=2;i<=n;i++){
       
        for( j=2;j<i;j++){
            
            if(i%j==0)
                break;
            }
       
        
        if(j==i){
            printf("%3d",i);
            
            sum=sum+i;
            
        }}
     printf("\nthe sum of prime numbers upto %d is %d",n,sum);
if(n==1)
{printf("it is neither prime nor composite");}
else
for(i=2;i<n;i++)

{if(n%i==0)
 break;

}
if(i==n)
{printf("\n%d is a prime number ",n);}
else 
{printf("\n%d is not a prime number",n);}
     
      return 0;   
    }
   
