#include <stdio.h>
int main(void)
{
int first,last,i,sum;
first=0;
last=0;
sum=0;

printf("give first number \n");
scanf("%d",&first);

printf("give last number \n");
scanf("%d",&last);


for(i=first+1;i<last;i++)
{
    sum += i;
}

printf("the sum of the numbers between %d and %d is %d",first, last, sum);
return 0;
}