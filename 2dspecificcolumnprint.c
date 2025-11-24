#include <stdio.h>
int main()
{
    int r,c;
  scanf("%d %d",&r,&c);
   int array[r][c];
   for(int i=0;i<r;i++)
   {
    for(int j=0;j<c;j++)
    {
        scanf("%d",&array[i][j]);
    }
   }
   for(int i=0;i<c;i++) // coloumn part ta print korbo j
   {
    printf("%d ",array[2][i]);
   }
}