#include <stdio.h>

void hellow(int a) 

{

    if(a==101)
    {
        return;

    }
     hellow(a+1);
    printf("%d\n",a);
    hellow(a+1);

}

int main()
{
    int a=1;
    hellow(a);
    return 0;
}