#include<stdio.h>
int main()
{
long s,d,i,n;
while(scanf("%ld%ld",&s,&d)==2)
{
n=0;
for(i=s;;i++)
{
n=n+i;
if(n>=d)
{
printf("%ld\n",i);
break;
}
}
}
return 0;
}
