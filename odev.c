#include<sdio.h>
#include<conio.h>
int main()
{
int a;
printf("Enter any integer");
scanf("%d",&a);
if(a%2==0)
{
printf("Given number is even");
}
else
{
printf("Given number is odd");
}
return0;
}
