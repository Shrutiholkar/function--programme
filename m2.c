//accept n numbers in an array and accept a number to search and display its position(using function)

#include<stdio.h>
int main()
{
int a[100],i,n,num,p;
int search(int a[100],int n,int num);
printf("enter limit");
scanf("%d",&n);
printf("eter n no ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter no to search");
scanf("%d",&num);
p=search(a,n,num);
if(p==-1)
printf("no is not found");
else
printf("no is found position=%d",p);
}
 
int search(int a[100],int n,int num) 
{
int i;
for(i=0;i<n;i++)
{
if(a[i]==num)
{
return i;
}

}
return -1;
}
