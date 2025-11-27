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
     int flag=0;
     int diagoanl_value=array[0][0];
     array[0][0]=1;
    if(r==c)
    {
       for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
              if(i==j)  // on diagonal e check kortesi j ado same kina equal judge 
                       // na kore not equal judge kotesi.. i=0,j=0 te check korbe
             {
                if(array[i][j]!=diagoanl_value)
                {
                    flag=1;
                    printf("this is not a unit matrix\n");
                }
                
              }
              else
              {
                if(array[i][j]!=0) 
                
                {
                    flag=1;
                   printf("this is not a unit  matrix\n");
                }
              }
        }  
     }
    if(flag==0)
    {
       printf("this is a unit matrix\n");
    }
   }
  else
   {
    printf ("this is not a unit matrix\n");
   }
}