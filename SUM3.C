#include<stdio.h>
#include<conio.h>
void  main()
{
int i,n,sum=0;
clrscr();
printf("ENTER YOUR VALUE==>");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 printf("%d\n",i);
 sum=sum+i;
}
printf("ANS==`%d",sum);
getch();
}