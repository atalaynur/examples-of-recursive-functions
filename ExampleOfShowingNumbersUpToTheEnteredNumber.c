#include <stdio.h>

int f(y)

{
if (y==0)
{
    return 0;
}

else
printf(" %d ",y);
return f(y-1);

}


int main()

{

int a;
printf("enter a number: ");
scanf("%d", &a);
int result= f(a);
printf("%d", result);

return 0;

}