#include <stdio.h>
void bubble (int[], int);
void main()
{
int arr[100],n,i;
printf("enter number of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
bubble(arr,n);
for(i=0;i<n;i++)
{
printf("%d\n",arr[i]);
}
}
void bubble(int s[],int n)
{
int c,d,t;
for(c=0;c<n-1;c++)
{
for(d=0;d<n-c-1;d++)
{
if(s[d]>s[d+1])
{
t=s[d];
s[d]=s[d+1];
s[d+1]=t;
}
}
}
}