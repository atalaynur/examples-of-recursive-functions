#include <stdio.h>

int sum(x)
{
    if (x==0)
    {
        return 0;
    }
    
    else

    return x+ sum(x-1);

}

int main ()

{
    int a;
printf("enter a number: ");
scanf("%d", &a);
int result= sum(a);
printf("sum: %d", result);

return 0;

} 
