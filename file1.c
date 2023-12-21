// Online C compiler to run C program online
#include <stdio.h>

void fun()
{
    extern int i=0;
    printf("%d ",i);
    i++;
}
int main() {
    // Write C code here
    for(int i=0;i<20;i++)
    {
        fun();
    }

    return 0;
}
