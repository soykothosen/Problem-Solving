#include<stdio.h>
#include<math.h>


int main()
{

    float factorial (float a)
            {

                float fact = 1.0;

                int j;


                for(j=a; j>=1; j--)
                {

                    fact = fact*j;


                }


                return fact;

            }



    float sum_of_series ( float x, float n)
    {


        if( n<0 || (int) n%2 != 0 )
        {
            printf("Please enter even value of n\n");
            return 0;
        }
        else
        {


            float sum=1;
            int i,j,count = 2;




            for( i=2; i<=n; i = i + 2)
            {

                if(count%2 == 0)
                {

                    sum = sum - ((pow(x,i))/factorial(i));


                }
                else
                {

                    sum = sum + ((pow(x,i))/factorial(i));


                }
                count++;


            }

            printf("The sum of series is %.3f \n", sum);



        }





    }

    float x,n;

    printf("Please enter the value of x: ");
    scanf("%f",&x);

    printf("Please enter the value of n: ");
    scanf("%f",&n);



    sum_of_series ( x, n );




    return 0;

}
