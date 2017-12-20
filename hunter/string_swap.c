#include <stdio.h>
int main()
{
    char a[100];
    int i,n,temp;
    scanf("%s",&a);
    n=strlen(a);
    n=n/2*2;
    for(i=0;i<n;i+=2)
    {
      temp=a[i];
      a[i]=a[i+1];
      a[i+1]=temp;
    }
     printf("%s\n",a);
}
