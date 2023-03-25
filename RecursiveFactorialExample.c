#include <stdio.h>

int f(int x)

{

if (x<=1)
{
    return 1;
}
 
else
{
    return x * f(x-1);
}

}

int main()
{
int a;

printf("enter a number:");
scanf("%d", &a);
int result=f(a);
printf("%d!: %d ", a, result);
return 0;
}
