#include<stdio.h>
#include<conio.h>
void  main()
{
int i,n,factorial=1;
clrscr();
printf("ENTER YOUR NUMBER==>");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 factorial*=i;
}
printf("FACTORIAL of%d is: %d\n",n,factorial);
getch();
}