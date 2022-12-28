#include <stdio.h>
#include <math.h>
int main() 
{
    int arr[100][2];           
    int x = 2, y = 3;
    int X,Y;
    int p,q,r,s,z=0,a=0;
    float min,d=0;
    float sd[100];

    printf("Enter the coordinates: ");      
    scanf("%d %d",&p,&q);


    for (int i = 0; i < 100; i++)       
    {
        for (int j = 0; j < 2;j++)
        {
            if (j == 0)
            {
                arr[i][j] = x;
                x =x+ 2;
            }
            else
            {
                arr[i][j] = y;
                y =y+ 3;
            } 
        }
    }

    for ( r = 0; r< 100; r++)
    {
        for ( s = 0; s < 1; s++)
        {if (arr[r][s] == p && arr[r][r+1] == q)
            {  
                a=1;
                printf("it is on the line itself\n");
                printf("the shortest distance is 0");
            }
            else
            {X = arr[r][s];

            Y = arr[r][s+1];
                d = sqrt(pow((X - p),2) + pow((Y - q),2)); 
               sd[r] = d;}
            
        }
    }
    min=sd[0];
    for(z=0;z<100;z++){
    while(sd[z]<min)
    {
        min=sd[z];
    }}
if(a!=1){
   for (int e = 0; e < 100; e++)
    {
        for (int f = 0; f < 1; f++)
            {float distance;
               int A = arr[e][f];
                int B = arr[e][f+1];   
                distance = sqrt(pow((A - p),2) + pow((B - q),2)); 
               if( min == distance)
               printf("The nearby coordinates for the given coordinates are %d,%d\n",A,B);
            }
    }
    
     printf("the shortest distance is : %.2f \n",min);}
    return 0;
}   







