#include <stdio.h>
void mellow()
{
printf("MELLOW");

}
void gellow()
{
printf("GELLOW\n");
mellow();
}
void hellow()
{
printf("HELLOW\n");
hellow();
}

int main()
{
    printf("hi\n");
    hellow();
    return 0;
}