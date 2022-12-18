#include<stdio.h>
int gcd(int a,int b)
{
int temp;
while(b>0)
{
temp=b;
b=a%b;
a=temp;
}
return a;
}
int main()
{
int a[10],n,i;
printf("enter the total no of elements =");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int r=a[0];
for(i=0;i<n;i++)
{
  r=gcd(r,a[i]);
}
printf("gcd= %d",r);
}