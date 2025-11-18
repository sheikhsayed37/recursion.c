#include <stdio.h>

void hellow(int a)   //atate recurssion k stop korsi
{
    if(a==6)
    {
        return;

    }
    printf("%d\n",a);
    hellow(a+1);
}

int main()
{
    int a=1;
    hellow(a);
    return 0;
}