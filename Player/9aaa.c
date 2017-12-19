#include<stdio.h>
int main()
{
int d=0,b=9,e=0,j;
for(j=0;j<4;j++)
{
d=b*pow(10,j)+d;
e=e+d;
}
printf("%d",e);
}
