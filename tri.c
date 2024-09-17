#include <stdio.h>

int main()
{
    int a,b,c, sum;

    
    printf("Enter three angles of triangle: \n");
    scanf("%d%d%d", &a, &b, &c);

    
    sum = a + b + c; 

    
    if(sum == 180 && a > 0 && b > 0 && c > 0) 
    {
        printf("Triangle exists.");
    }
    else
    {
        printf("Triangle does not exist.");
    }

    return 0;
}
