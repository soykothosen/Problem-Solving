#include<stdio.h>

main()
{

    char input[10];
    char output[10];
    int i;

    printf("Please input any 10 characters. May be upper or lowercase: ");


/// loop to get input. Start
    for(i=0; i<10; i++)
    {

        scanf("%c",&input[i]);

    }

    ///end


/// Loop to check upper or lower case and to convert opposition case. start
    for(i=0; i<10; i++)
    {

        if(input[i] >= 'a' && input[i] <= 'z')
        {
            output[i] = input[i] - 32;
        }

        if(input[i] >= 'A' && input[i] <= 'Z')
        {
            output[i] = input[i] + 32;


        }

    }

    ///end

    printf("The Output is: ");

/// loop to print output. Start
    for(i=0; i<10; i++)
    {

        printf("%c",output[i]);
    }

    ///end



    return 0;
}
