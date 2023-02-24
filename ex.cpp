#include<iostream>

int main()
{
int d,n,last,count=0;
printf("enter a num");
scanf("%d",&n);
printf("/n enter the digit");
scanf("%d",&d);
while(n!=0)
{
    last=n%10;
    if(last==d)
    count++;
    n=n/10;
}

printf(" the fre. of %d is %d",d,count);
return 0;
}