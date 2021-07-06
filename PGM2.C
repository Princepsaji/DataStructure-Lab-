#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,item,n,beg,end,pos=-1,mid;
clrscr();
printf("enter limit of the array:");
scanf("%d",&n);
printf("Enter the limit");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
printf("\nArray\n");
for(i=1;i<=n;i++)
{
printf("%d",a[i]);
}
printf("\n Enter the elements to be search:");
scanf("%d",&item);
beg=1;
end=n;
pos=-1;
while(beg<=end)
{
mid=(beg+end)/2;
if(a[mid]==item)
{
pos=mid;
printf("%d found at %d",item,pos);
break;
}
else
{
if(a[mid]>item)
end=mid-1;
else
beg=mid+1;
}
}
if(pos==-1)
printf("value is not present in the array");
getch();
}