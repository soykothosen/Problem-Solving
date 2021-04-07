#include<stdio.h>

main(){


int i,j=0, negative_num = 0,n=0,p=0;

int A[10]={3, -5, 1, 3, 7, 0, -15, 3, -7, -8}, B[10];

for(i=0;i<10;i++){
    if(A[i]<0){
        negative_num ++;
    }

}


for(i=0;i<10;i++){
    if(A[i]<0){
        B[n]= A[i];
        n++;
    }

    if(A[i]>=0){
        j = negative_num + p;
        B[j]= A[i];
        p++;
    }

}


for(i=0;i<10;i++){

    printf("%d ",B[i]);
}




return 0;
}
