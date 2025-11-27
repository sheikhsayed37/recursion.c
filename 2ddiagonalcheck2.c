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

    if(r==c)
    {
        
        for(int i=0;i<r;i++)
       {
        for(int j=0;j<c;j++)
        {
            if(i+j != r-1)  //secondary diagonal check
            {
                // we are on diagonal
            }
            else   // not in diaginal part mane korno borabor na bakigola 
            {
                if(array[i][j]!=0)
                {
                    flag=1;
                    printf("this is not a diagonal matrix");

                }
            }

        }

       }
       if(flag==0)
       {
        printf("this is a diagonal matrix\n");
       }   

}
else
    {
        printf("this is a not diagonal matrix\n");
    }
}

