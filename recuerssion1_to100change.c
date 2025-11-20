#include <stdio.h>


void hellow(int a) 

{

    if(a==101)
    {
        return;

    }
    hellow(a+1);// just ai change ta korle mane olta hoi
             
    printf("%d\n",a);
    

}

int main()
{
    int a=1;
    hellow(a);
    return 0;
}