 #include<stdio.h>
#include<conio.h>
void main()
{
int a[15],n,i,j=1,val,pos=-1;
clrscr();
printf("enter limit");
scanf("%d",&n);
printf("enter elements");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
printf("array \n");
for(i=1;i<=n;i++)
{
printf("%d\t",a[i]);
}
printf("\n Enter the elements to be search:");
scanf("%d",&val);
while(j<=n)
{
if(a[j]==val)
{
pos=j;
printf("%d found at location %d",val,pos);
}
j=j+1;
}
if(pos==-1)
printf("value is not present in the array");

getch();
}
