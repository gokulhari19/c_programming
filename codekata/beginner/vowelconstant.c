#include<stdio.h>
int main()
{
int upper,lower;
char c;
scanf("%s",&c);

upper=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
lower=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');

if(c==upper||lower)
{
printf("vowel");
}
else{
printf("constant");
}
}
