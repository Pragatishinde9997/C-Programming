#include<stdio.h>
int main()
{
    int x=5,y=2,z;
    float a=5,b=2,c;
    z=x/y;
    printf("I/I=%d\n",z);
    c=x/b;
    printf("I/R=%.1f\n",c);
    c=a/y;
    printf("R/I=%.1f\n",c);
    c=a/b;
    printf("R/R=%.1f",c);
    return 0;
}
