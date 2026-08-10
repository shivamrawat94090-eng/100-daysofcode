//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include<stdio.h>
int main()
{
    printf("Enter two numbers ");
    float a,b;
    scanf("%f %f",&a,&b);
    float sum= a+b;
    float diff= a-b;
    float product= a*b;
    float quotient=a/b;
    printf("Sum=%.2f,Diff=%.2f,Product=%.2f,Quotient=%.2f",sum,diff,product,quotient);
    return 0;
}