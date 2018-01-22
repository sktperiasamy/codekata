#include<sdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("Enter any integer");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("a is greatest");
}
  elseif(b>c&&b>a)
  {
    printf("b is greatest");
  }
else
{
printf("c is greatest");
}
return0;
}
