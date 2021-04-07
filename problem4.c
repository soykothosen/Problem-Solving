#include<stdio.h>

main()
{

    int m1,m2,m3,n1,n2,n3,i,j,k,sum=0;

    printf("Please enter the row number of 1st Matrice: ");

    scanf("%d",&m1);

    printf("Please enter the column number of 1st Matrice: ");

    scanf("%d",&n1);

    printf("Please enter the row number of 2nd Matrice: ");

    scanf("%d",&m2);

    printf("Please enter the column number of 2nd Matrice: ");

    scanf("%d",&n2);

    int matrix1[m1][n1], matrix2[m2][n2];

    if(n1 != m2)
    {

        printf("We can not product between these matrices");
    }
    else
    {

        m3 = m1;
        n3 = n2;

        int output[m3][n3];

        ///printf("%d %d\n", m3,n3);


        printf("Please enter the 1st Matrices\n");



        for ( i=0; i<m1; i++ )
        {

            printf("%d number row: ",i+1);

            for(j=0; j<n1; j++)
            {

                scanf("%d",&matrix1[i][j]);
            }

        }

        printf("Please enter the 2nd Matrices\n");



        for ( i=0; i<m2; i++ )
        {

            printf("%d number row: ",i+1);

            for(j=0; j<n2; j++)
            {

                scanf("%d",&matrix2[i][j]);
            }

        }


        for ( i=0; i<m1; i++ )
        {



            for(j=0; j<n2; j++)
            {

                for(k=0; k<m2; k++)
                {

                    sum = sum + matrix1[i][k]*matrix2[k][j];


                }

                output[i][j]= sum;
                sum = 0;

            }



        }


        printf("The product of two matrices \n");


        for ( i=0; i<m3; i++ )
        {


            for(j=0; j<n3; j++)
            {

                printf("%d ",output[i][j]);
            }

            printf("\n");



        }



    }








    return;
}
