#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
printf("enter the character");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
printf("Given character is vwel");
}
else{
printf("Given character is consonant");
}
return0;
}
