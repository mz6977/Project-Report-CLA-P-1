#include<stdio.h>
int main()
{
int a,b;
printf("Please enter two numbers: ");
scanf("%d %d",&a,&b);
printf("Sum Of Numbers= %d\n",a+b);
if(a>b)
{
    printf("Difference Of Numbers= %d\n",a-b);
    printf("Division Of Numbers= %d\n",a/b);
    printf("Remainder Of Numbers= %d\n",a%b);
}
else
{
    printf("Difference Of Numbers= %d\n",b-a);
    printf("Division Of Numbers= %d\n",b/a);
    printf("Remainder Of Numbers= %d\n",b%a);
}
return 0;
}
