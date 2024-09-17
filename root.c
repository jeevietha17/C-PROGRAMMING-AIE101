#include <stdio.h>
int main()
{
    float a, b, c;
    float root1, root2, imaginary;
    float discriminant;
    
    printf("Enter values of a, b, c of quadratic equation aX^2 + bX + c: ");
    scanf("%f%f%f", &a, &b, &c);
    

    discriminant = (b * b) - (4 * a * c);
    
   

    if(discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);

        printf("Two real roots exists: %.2f and %.2f", root1, root2);
    }
    else if(discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);

        printf("Two equal real roots exists: %.2f and %.2f", root1, root2);
    }
    else (discriminant < 0)
    {
        
        printf("No real roots exist, they are imaginary");
    }

    return 0;
}
