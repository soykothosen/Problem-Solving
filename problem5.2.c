#include<stdio.h>

int main()
{

    void swap_without_variable ( int a, int b )
    {

        printf("\n Before Swap The Value of a is %d &  b is %d\n", a,b);

        a=a+b;
        b=a-b;
        a=a-b;

        printf("\n After Swap The Value of a is %d &  b is %d\n", a,b);

    }

    int a,b;

    printf("Please enter the value of a: ");
    scanf("%d",&a);

    printf("Please enter the value of b: ");
    scanf("%d",&b);

    swap_without_variable( a , b );



    return 0;
}
