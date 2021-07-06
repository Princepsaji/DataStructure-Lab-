#include<stdio.h>
#include<conio.h>
#define max 50

void selectionsort(int,int[]);
void main()
{
int i,size,data[max];
clrscr();

printf("\n Enter no the elements of the array: ");
scanf("%d",&size);

printf("\nEnter Elements:");
for(i=1;i<=size;i++)
scanf("%d",&data[i]);

printf("\nUnsorted Data:\n");
for(i=1;i<=size;i++)
printf("%d\t",data[i]);

selectionsort(size,data);
getch();
}
void selectionsort(int n,int data[])
{
int i,j,min,temp;
printf("\nsorted list:\n");
for(i=1;i<=n-1;i++)
{
min=i;
for(j=i+1;j<=n;j++)
{
if(data[j]<data[min])
min=j;
}
temp=data[i];
data[i]=data[min];
data[min]=temp;
}
for(i=1;i<=n;i++)
printf("%d\t",data[i]);
}













