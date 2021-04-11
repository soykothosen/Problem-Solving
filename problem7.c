#include<stdio.h>

int main(){


int row,i=1,j;
char output = 'A',k;

printf("Please enter the row number: ");
scanf("%d",&row);


while(i<=row){

        printf("%d: ",i);

        j = 0;

        while(j<i){

                k = output + j;
                printf("%c%c",k,k);

            j++;
        }
        printf("\n");



    i++;
}



return 0;

}
