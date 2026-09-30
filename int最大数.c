#include <stdio.h>
int main()
{
    int a=0,b=0;
    while (++a>0)
        ;
    printf("int数据类型最大的数是:%d\n",a-1);
    while ((a=a/10)!=0)
        b++;
    {
        b++;
    }
    printf("int数据类型最大的数的数位是:%d",b);
    return 0;
}