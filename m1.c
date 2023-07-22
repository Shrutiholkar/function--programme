//accept n numbers in an array and accept a number to search (using function)


#include<stdio.h>
int main()
{
void search(int a[100],int n,int num);
int a[100],i,n,num;
printf("enter limit ");
scanf("%d",&n);
printf("enter n nos");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter no to search");
scanf("%d",&num);
search(a,n,num);
}
void search(int a[100],int n,int num)
{
int i;
for(i=0;i<n;i++)
{
if(a[i]==num)
{
printf("no is found");
 break;
}
}
if(i==n)
printf("no not is found");


}
