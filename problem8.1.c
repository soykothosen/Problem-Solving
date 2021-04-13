#include<stdio.h>



int main(){


struct hotel_info {

char Hotel_name[50];
char address1[100];
char room_type[10];
int rent_per_day;


};


struct hotel_info hotel[3];
int i,charge;

printf("Enter the information of 3 Hotel\n");

for(i=1;i<=3;i++){

        printf("Hotel No.: %d\n",i);

        printf("Hotel Name: ");
        scanf("%s",&hotel[i].Hotel_name);


        printf("Address: ");
        scanf("%s",&hotel[i].address1);

        printf("Room Type: ");
        scanf("%s",&hotel[i].room_type);

        printf("Rent per Day: ");
        scanf("%d",&hotel[i].rent_per_day);

}

for(i=1;i<=3;i++){


        printf("Hotel Name: %s\n",hotel[i].Hotel_name);


        printf("Address: %s\n",hotel[i].address1);


        printf("Room Type: %s\n",hotel[i].room_type);


        printf("Rent per day: %d\n",hotel[i].rent_per_day);

}

printf("Hotels with room charges less than ");

scanf("%d",&charge);

for(i=1;i<=3;i++){


        if(hotel[i].rent_per_day<charge){

        printf("Hotel Name: %s\n",hotel[i].Hotel_name);


        printf("Address: %s\n",hotel[i].address1);


        printf("Room Type: %s\n",hotel[i].room_type);


        printf("Rent per day: %d\n",hotel[i].rent_per_day);

        }



}





return 0;

}

