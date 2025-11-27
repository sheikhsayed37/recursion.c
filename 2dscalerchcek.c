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

    if(r==c)
    {
       for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
              if(i==j)  // on diagonal e ami check kortesi j ado same kina equal judge 
                    // na kore not equal judge kotesi .i=0,j=0 te ata check korbe
              {
                if(array[i][j]!=diagoanl_value)
                {
                    flag=1;
                    printf("this is not a scaler matrix\n");
                }
                
              }
              else
              {
                if(array[i][j]!=0)   //off diagonal  i no equal j te ata check korbe
                
                {
                    flag=1;
                   printf("this is not a scaler matrix\n");
                }
              }


        }
        
     }
    if(flag==0)
    {
       printf("this is a scaler matrix\n");
    }
   }
  else
   {
    printf ("this is not a scaler matrix\n");
   }
}