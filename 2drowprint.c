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
   
   int specific_column;
scanf("%d",&specific_column);// kon row ta print korbo seta input
   for(int i=0;i<r;i++) // row part ta print korbo j
   {
    printf("%d\n",array[i][specific_column]);
   }
}