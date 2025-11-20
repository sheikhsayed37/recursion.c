#include <stdio.h>
void hellow(int a) 

{

    if(a==101)
    {
        return;

    }

    
    if(a%2==0)
    {
     printf("%d\n",a);
    }

    hellow(a+1);
}

int main()

{
    
    hellow(1);// aibabe direct declare kora jai
    return 0;
}