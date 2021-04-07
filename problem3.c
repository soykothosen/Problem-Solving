#include<stdio.h>

main()
{

    char str1[5], str2[5], output[5],input;
    int i,j,n=0,k,common = 0;

    printf("Please input a string of 5 characters: ");

    for(i=0; i<5; i++)
    {
        scanf("%c",&input);
        if(input != 10)
        {
            str1[i] = input;
        }
        if(input == 10)
        {
            i--;
        }
    }

    printf("Please input a string of 5 characters: ");

    for(i=0; i<5; i++)
    {
        scanf("%c",&input);

        if(input != 10)
        {
            str2[i] = input;
        }
        if(input == 10)
        {
            i--;
        }
    }




    for(i=0; i<5; i++)
    {

        for(j=0; j<5; j++)
        {

            if(str1[i]==str2[j])
            {

                output[n] = str1[i];
                str2[j] = '0';
                n++;
                common++;
                break;


            }

        }

    }

    if(common == 0)
    {

        printf("There are no common characters between two strings\n");


    }
    else
    {

                printf("The common characters between two strings is: ");

        for(i=0; i<n; i++)
        {
            printf("%c",output[i]);
        }



    }



    return 0;
}

