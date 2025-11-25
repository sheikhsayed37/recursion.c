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
  int total_value=r*c;
  int zero=0;
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
        if(array[i][j]==0)
        {
            zero++;

        }
    }
  }
  if(total_value==zero)   // total value 9 zero paise 8
  {
    printf("THIS IS A ZERO MATRIX");

  }
  else
  {
    printf("this is not a zero matrix");
  }
}

