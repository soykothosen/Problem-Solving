#include<stdio.h>

int main()
{

    void swap_with_variable ( int a, int b )
    {
        int temp;

        printf("\n Before Swap The Value of a is %d &  b is %d\n", a,b);

        temp = a;
        a=b;
        b=temp;

        printf("\n After Swap The Value of a is %d &  b is %d\n", a,b);

    }

    int a,b;

    printf("Please enter the value of a: ");
    scanf("%d",&a);

    printf("Please enter the value of b: ");
    scanf("%d",&b);

    swap_with_variable( a , b );



    return 0;
}

