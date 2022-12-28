#include<stdio.h>
int main(){
 
  int m[3][3],i,j;
  float d=0,m2[3][3];
 
  printf("Enter the  elements of matrix: ");
  for(i=0;i<3;i++)
      for(j=0;j<3;j++)
           scanf("%d",&m[i][j]);
 
  printf("\nThe matrix is\n");
  for(i=0;i<3;i++){
      printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",m[i][j]);
  }
 
  for(i=0;i<3;i++)
      d = d + (m[0][i]*(m[1][(i+1)%3]*m[2][(i+2)%3] - m[1][(i+2)%3]*m[2][(i+1)%3]));
if(d==0)
{printf("the determinent of the matrix is 0 ");
    printf("the given matrix is singular matrix");
}
 else 
 {printf("the determinent of the matrix is %f",d);
 m2[0][0]=(m[1][1]*m[2][2]-m[1][2]*m[2][1])/d;
 m2[0][1]=(m[0][2]*m[2][1]-m[0][1]*m[2][2])/d;
 m2[0][2]=(m[0][1]*m[1][2]-m[0][2]*m[1][1])/d;
m2[1][0]=(m[1][2]*m[2][0]-m[1][0]*m[2][2])/d;
m2[1][1]=(m[0][0]*m[2][2]-m[0][2]*m[2][0])/d;
m2[1][2]=(m[0][2]*m[1][0]-m[0][0]*m[1][2])/d;
m2[2][0]=(m[1][0]*m[2][1]-m[1][1]*m[2][0])/d;
m2[2][1]=(m[0][1]*m[2][0]-m[0][0]*m[2][0])/d;
m2[2][2]=(m[0][0]*m[1][1]-m[0][1]*m[1][0])/d;

printf("the inverse of the given 3x3 matrix is \n");
for(i=0;i<3;i++)
{printf("\n");
      for(j=0;j<3;j++)
printf("%f\t",m2[i][j]);}}

return 0;
}
