#include<stdio.h>
int main()
{
int a=30,b=20,c=0;
printf("\n eneter two nos");
scanf("%d%d",&a,&b);
printf("\nenter 1 for add");
printf("\nenter 2 for sub");
scanf("%d",&c);

if(a==1)
{
printf("%d",a+b);
}
else
{
printf("%d",a-b);
}
return 0;
}
