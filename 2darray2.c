#include <stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int array[r][c];
    scanf("%d",&array[0][0]);
    scanf("%d",&array[0][1]);
    scanf("%d",&array[0][2]);
    scanf("%d",&array[1][0]);
    scanf("%d",&array[1][1]);
    scanf("%d",&array[1][2]);
    scanf("%d",&array[2][0]);
    scanf("%d",&array[2][1]);
    scanf("%d",&array[2][2]);
    
    

    printf("%d ",array[0][0]);
    printf("%d ",array[0][1]);
    printf("%d ",array[0][2]);
  
    printf("%d ",array[1][0]);
    printf("%d ",array[1][1]);
    printf("%d ",array[1][2]);
   
    printf("%d ",array[2][0]);
    printf("%d ",array[2][1]);
    printf("%d ",array[2][2]);
  
    



}