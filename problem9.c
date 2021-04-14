#include<stdio.h>

int main()
{

    int option, a[50],i=0,j=0,value;

    for(i=0; i<50; i++)
    {

        a[i]=0;

    }


    while(1)
    {

        printf("To input into array Press 1\nTo display element Press 2\nTo exit Press 3\n ");

        scanf("%d",&option);

        if(option == 3)
        {
            return 0;
        }
        else if(option == 1)
        {

            if(j<50)
            {



                printf("Enter the value: ");
                scanf("%d",&value);

                for (i=0; i<50; i++)
                {
                    if(a[i]==0)
                    {
                        a[i]= value;
                        break;
                    }

                }
                j++;



            }
            else
            {

                printf("Array is full\n");
            }



        }
        else if(option == 2)
        {

            if(j>0)
            {

                for (i=0; i<50; i++)
                {
                    if(a[i]>0 || a[i]<0)
                    {
                        printf("%d\n",a[i]);
                        a[i]=0;
                        j--;
                        break;
                    }
                    else if ( i == 50 )
                    {

                        printf("No values available to delete\n");
                    }


                }




            }
            else
            {
                printf("No values available to delete\n");
            }


        }
        else
        {
            printf("Please Press correct button\n");
        }



    }




}

