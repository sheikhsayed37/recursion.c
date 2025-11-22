#include <stdio.h>
void sayed(int a[],int n,int i)
{
    if(i==n)
    {
        return;
    }
    printf("%d\n",a[i]); // o age print kore dibe then sayed fun e 1 barai abr
                       // dikbe then abr print
    sayed(a,n,i+1);
     

}


 int main()
 {
    int n,i;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<=n;i++)
    {
        scanf("%d ",&a[i]);

    }
    sayed(a,n,i);
 }