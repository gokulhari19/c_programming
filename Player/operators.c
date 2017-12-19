#include<stdio.h>
int amin()
{
int a,f,b,c,d,e,z;
printf("Enter the value of a and b\n");
scanf("%d%d",&a,&b);
printf("Enter the choice\n");
scanf("%d",&z);
switch(z)
{
case 1:
printf("%d",c=a+b);
break;
case 2:
printf("%d",c=a-b);
break;
case 3:
printf("%d",c=a*b);
break;
case 4:
printf("%d",c=a/b);
break;
case 5:
printf("%d",c=a^b);
break;
}
}
