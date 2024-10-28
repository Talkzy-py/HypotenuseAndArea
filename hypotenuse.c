#include <stdio.h>
#include <math.h>

int main(){
    double A;
    double B;
    double C;
    double Area;
    printf("What is the length of leg A in your triangle?\n");
    scanf("%lf", &A);
    printf("What is the length of leg B in your triangle?\n");
    scanf("%lf", &B);
    Area = A * B;
    Area = Area / 2;
    A = pow(A, 2);
    B = pow(B, 2);
    C = A + B;
    C = sqrt(C);
    printf("The area of your triangle is %lf\n", Area);
    printf("The hypotenuse of your triangle is %lf", C);


    return 0;
}