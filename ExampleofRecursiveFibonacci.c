#include <stdio.h>

int f(int x)

{
if (x==0)
{
    return 0;
}
 
 if (x==1)
 {
   return 1;
 }
 
 else

 return f(x-1) + f(x - 2);

}

int main()
{
int a;
printf("enter a number: ");
scanf("%d", &a);
int result= f(a);
printf("Fib%d = %d\n", a,result);
return 0;

}