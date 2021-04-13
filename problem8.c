#include<stdio.h>



int main(){


struct hotel_info {

char Hotel_name[50];
char address[100];
char room_type[10];
int rent_per_day;


};


struct hotel_info hotel[3];
int i,charge,k=0;

printf("Enter the information of 3 Hotel\n");

for(i=0;i<3;i++){

        printf("Hotel No.: %d\n",i+1);

        printf("Hotel Name: ");
        scanf("%s",&hotel[i].Hotel_name);


        printf("Address: ");
        scanf("%s",&hotel[i].address);

        printf("Room Type: ");
        scanf("%s",&hotel[i].room_type);

        printf("Rent per Day: ");
        scanf("%d",&hotel[i].rent_per_day);

}

for(i=0;i<3;i++){


        printf("\nHotel Name: %s\n",hotel[i].Hotel_name);


        printf("Address: %s\n",hotel[i].address);


        printf("Room Type: %s\n",hotel[i].room_type);


        printf("Rent per day: %d\n",hotel[i].rent_per_day);

}

printf("\nHotels with room charges less than ");

scanf("%d",&charge);

for(i=0;i<3;i++){


        if(hotel[i].rent_per_day<charge){

        printf("\nHotel Name: %s\n",hotel[i].Hotel_name);


        printf("Address: %s\n",hotel[i].address);


        printf("Room Type: %s\n",hotel[i].room_type);


        printf("Rent per day: %d\n",hotel[i].rent_per_day);

        k++;

        }



}

if(k==0){
    printf("\nNo room below the charge.\n");
}





return 0;

}
