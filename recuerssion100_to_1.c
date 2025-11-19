#include <stdio.h>

void hellow(int a) 

{

    if(a==0)
    {
        return;

    }
    printf("%d\n",a);
    hellow(a-1);

}

int main()
{
    int a=100;
    hellow(a);
    return 0;
}