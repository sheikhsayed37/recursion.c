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
    
   if(r==c)
   {
    printf("THIS IS A  square MATRIX");

   }
   else
    {
        printf("this is not a square matrix");
    }
}