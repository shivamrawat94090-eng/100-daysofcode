//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include<stdio.h>
    int main()
    {
        int n1,n2,lcm;
        printf("enter the two psoitive numbers:");
        scanf("%d %d",&n1,&n2);
        lcm=(n1>n2)?n1:n2;
        while(1)
        {
            if(lcm%n1==0 && lcm%n2==0)
            {
                break;
            }
            lcm++;
        }
             printf("LCM = %d\n", lcm);
        return 0;
    }
